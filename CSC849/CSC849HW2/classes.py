import collections
import nltk
import sys
import re


class File:

    content = ""  # the words in the file.
    docID = -1  # once instantiated it won't be a negative number, we can use this as a check if it's a valid file.

    def __init__(self, content, docid, docname):
        self.content = content  # keeps a copy of the text the File object was given before it was normalized.
        self.contentChanged = content  # this copy of content will be sent through the normalization process.
        self.docID = docid  # this is the documentID of the file.
        self.docName = docname  # The name of the file.
        self.normalized = []  # the set of words that have been normalized from the original content.

    # def print_content(self):
    #     print(self.content)

    def to_string(self):
        # print(self.contentChanged)
        print(self.content)
        print(self.normalized)
        print("docID = ", self.docID)
        print("doc Name = ", self.docName)
        print("word count: ", len(self.normalized))
        print("\n")

    def remove_nonalpha_numeric(self):
        for i in range(len(self.normalized)):
                self.normalized[i] = re.sub("[^\w]", "", self.normalized[i])

        return self.contentChanged

    def tokenize(self):
        self.contentChanged = self.contentChanged.replace("-", ' ')
        self.normalized = self.contentChanged.split()
        return self.normalized

    def to_lower_case(self):
        tempList = []
        for word in self.normalized:
            word = word.lower()  # not sure if this will save the word.
            tempList.append(word)
        self.normalized = tempList

    def stem_tokens(self):
        tempList = []
        stemmer = nltk.stem.PorterStemmer()
        for word in self.normalized:
            word = stemmer.stem(word)
            tempList.append(word)
        self.normalized = tempList

    def normalize(self):
        self.tokenize()
        self.remove_nonalpha_numeric()
        self.to_lower_case()
        self.stem_tokens()


class InvertedIndex:

    ii = collections.OrderedDict()
    allWords = []
    file_array = []

    def __init__(self, file_array):
        self.file_array = file_array
        self.stop_words = ["the", "is", "at", "of", "on", "and", "a", ""]
        # ii = collections.OrderedDict
        docid_Termfreq_Termpos_Bundle = []  # i think this might need to happen just at the end.
        docContainingWord = []
        # docFreq = []
        term_count = 0
        term_frequency = []
        term_position = []
        counter = 0
        hashEntry = []

        for file in file_array:
            for word in file.normalized:
                self.allWords.append(word)
        self.allWords = sorted(self.allWords)
        # print(self.allWords)

        #  Fragile code try not to touch if possible.
        for word in self.allWords:
            for file in file_array:
                if word in file.normalized:  # if the word is in the file go into the if statement.
                    # gets docID
                    docContainingWord.append(file.docID)

                    # gets term frequency
                    for wordItem in file.normalized:
                        if word == wordItem:
                            term_count += 1

                    term_frequency.append(term_count)

                    # gets term positions.
                    for wordItem in file.normalized:
                        if word == wordItem:
                            term_position.append(counter)
                        counter += 1

                    # creating the bundle to push to the ordered dictionary.
                    docid_Termfreq_Termpos_Bundle.extend(docContainingWord)
                    docid_Termfreq_Termpos_Bundle.extend(term_frequency)
                    docid_Termfreq_Termpos_Bundle.append(term_position)

                    hashEntry.append(docid_Termfreq_Termpos_Bundle)

                docid_Termfreq_Termpos_Bundle = []
                docContainingWord = []
                term_frequency = []
                term_count = 0
                counter = 0
                term_position = []

            if word not in self.ii:
                # print(word, hashEntry)
                self.ii[word] = hashEntry
            hashEntry = []

        self.allWords = sorted(self.allWords)
        self.remove_stop_words()
        # print(self.allWords)

    def print_ii(self):
        # needs to be | word : docFreq |-> [docID, TF: termPositions]
        # print(self.ii)  # this isn't really good but I will improve it later.
        print("word , doc freq : [docID, TF, [termPositions]]")
        for key, val in self.ii.items():  # val is the thing the hash entry points to.
            docfreq = str(len(val))  # this code will break when I add the other changes in the init (I think).
            # indexEntry = k + " , " + docFreq + " : " + v
            indexentry = "".join([key, " , ", docfreq, " : "])
            print(indexentry, val)

    def remove_stop_words(self):
        for word in self.stop_words:
            del self.ii[word]
