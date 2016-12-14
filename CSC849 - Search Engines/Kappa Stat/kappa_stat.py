"""
What is a kappa statistic?
Rule of thumb:
Kappa of 0.8 or above is interpreted as good agreement.
Kappa of 0.67 to 0.79 is interpreted as fair agreement.
Kappa of 66 or less than is interpreted as weak agreement.
"""

import os
import collections

'''Main function of the program. Execution starts here.'''
def main():
    relevanceFileNames = get_relevance_file_names()
    listOfQueryHashes = []

    # For each file we want to turn that into 30 queries in a hash.
    # We do that by giving it to the QueryRelevanceFile object
    # We then store those objects in an array.
    myRelFile = QueryRelevanceFile(find_my_relevance_file())
    # myRelFile.compute_non_relevant()

    for name in relevanceFileNames:
        listOfQueryHashes.append(QueryRelevanceFile(name))

    # Returns a hash with name as the key, and value as their kappa score.
    kappa = compute_kappa(myRelFile, listOfQueryHashes, relevanceFileNames)

    print_kappas(kappa)

def print_kappas(kappaHash):
    for key, value in kappaHash.items():
        # print("name: " + str(key) + "  " + "value: " + str(value))
        if value >= 0.8:
            print('name: {0:<20} value: {1:<6.3f} {2:<4}'.format(key, value, "Good Agreement"))
        elif value >= 0.67 and value < 0.8:
            print('name: {0:<20} value: {1:<6.3f} {2:<4}'.format(key, value, "Fair Agreement"))
        elif value <= 0.66:
            print('name: {0:<20} value: {1:<6.3f} {2:<4}'.format(key, value, "Weak Agreement"))

'''K = (P(A) - P(E) / 1 - P(E))'''
def compute_kappa(myRelFile, listOfHashes, relFileNames):
    nameCount = 0
    kappaHash = {}
    for theirRelFile in listOfHashes:
        Pe = compute_probability_chance_agreement(compute_non_relevant(myRelFile, theirRelFile),
                                                  compute_relevant(myRelFile, theirRelFile))
        Pa = compute_probability_agreement(myRelFile, theirRelFile)

        key = relFileNames[nameCount]
        kappaHash[key] = ((Pa - Pe) / (1 - Pe))
        nameCount += 1

    return kappaHash

'''P(A) = (num of agreements / num of Queries)'''
def compute_probability_agreement(myRelFile, theirRelFile):
    numOfQueries = 30
    myListOfValues = []
    arrayCounter = 0
    numOfAgreements = 0
    for key, value in myRelFile.queryHash.items():
        val = value.split()
        myListOfValues.append(val[3])

    for key, value in theirRelFile.queryHash.items():
        val = value.split()
        if str(myListOfValues[arrayCounter]) == str(val[3]):
            numOfAgreements += 1
        arrayCounter += 1

    # print("numOfAgreements: ", numOfAgreements)
    probabilityAgreement = (numOfAgreements / numOfQueries)
    return probabilityAgreement

'''(# of no's / numQueries + numQueries)'''
def compute_non_relevant(myRelFile, theirRelFile):
    nonRelCounter = 0
    numOfQueries = 30
    for key, value in myRelFile.queryHash.items():
        val = value.split()
        if str(val[3]) == "0":
            nonRelCounter += 1

    for key, value in theirRelFile.queryHash.items():
        val = value.split()
        if str(val[3]) == "0":
            nonRelCounter += 1

    # print("nonRelevant: ", nonRelCounter)
    nonRelevant = (nonRelCounter / (numOfQueries + numOfQueries))
    return nonRelevant

'''(# of yes's / numQueries + numQueries )'''
def compute_relevant(myRelFile, theirRelFile):
    relCounter = 0
    numOfQueries = 30
    for key, value in myRelFile.queryHash.items():
        val = value.split()
        if val[3] == "1":
            relCounter += 1

    for key, value in theirRelFile.queryHash.items():
        val = value.split()
        if val[3] == "1":
            relCounter += 1

    # print("Relevant: ", relCounter)
    relevant = (relCounter / (numOfQueries + numOfQueries))
    return relevant

'''P(E) = (nonRelevant^2 + relevant^2)'''
def compute_probability_chance_agreement(nonRelevant, relevant):
    prob_chance_agreement = ((nonRelevant ** 2) + (relevant ** 2))
    return prob_chance_agreement

'''this function gets all the classes relevance file names from the directory.'''
def get_relevance_file_names():
    relFiles = []
    CWD = os.getcwd()

    # Go through directory and grab all the .txt files.
    for file in os.listdir(CWD):
        if ".txt" in file:
            relFiles.append(file)

    return relFiles

'''this function finds the file that matches my name.'''
def find_my_relevance_file():
    relFile = None
    CWD = os.getcwd()
    for file in os.listdir(CWD):
        if "Wishoff-qrels.txt" in file:
            relFile = file

    return relFile

'''
   This class instantiates an object that stores the relevance data in a hash.
   For each instance of a file
'''
class QueryRelevanceFile:

    def __init__(self, fileName):
        self.queryHash = collections.OrderedDict()
        self.create_hash_entry(fileName)

    # opens the file, reads the input, stores the input in a hash entry.
    # The hash should have 30 entries, since there are 30 queries.
    def create_hash_entry(self, fileName):
        # should only need to open with read permissions.
        hashEntryName = "query0"
        with open(fileName, 'r') as file:
            lines = file.readlines()
            # print(lines)
            i = 0
            for line in lines:
                i += 1
                hashEntryName = hashEntryName[:-1]
                hashEntryName = ''.join(str(i))
                # print(line)
                self.queryHash[hashEntryName] = line

    def to_string(self):
        print(self.queryHash)

# Execute program.
main()
