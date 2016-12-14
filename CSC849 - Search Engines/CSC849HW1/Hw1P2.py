# By: Matthew Wishoff
# Date: 8/31/16
# Homework #1 Part 2

# Part 2: (Simplified) Boolean Query Evaluation
# Write a program that can evaluate conjunctive queries with two operands. That is, queries of the
# form: Term1 AND Term2
# Note: Your program does not have to handle any other forms of queries.
# The algorithm for evaluating conjunctive queries is as follows:

# Answer[]
# while p1 != NIL and p2 != NIL
#    if docID(p1) == docID(p2)
#        then Add(answer, docID(p1))
#        p1 = next(p1)
#        p2 = next(p2)
#    else if docID(p1) < dcID(p2)
#        then p1 = next(p1)
#    else
#        p2 = next(p2)
# return answer

from Hw1P1 import * #Imports all functions from H1P1


def boolean_query_evaluation(key1, key2):
    ii = return_inverted_index()  # gets the inverted index from part 1 of the homework
    key1 = mod_word(key1)  # sends the first word to search through the stemmer, and case normalization
    key2 = mod_word(key2)  # sends the second word to search through the stemmer, and case normalization

    valueList = ii[key1]  # Gets the list of documents the key points too for key1
    valueList2 = ii[key2]  # Gets the list of documents the key points too for key2

    lengthList = len(valueList)
    lengthList2 = len(valueList2)

    # print(lengthList)
    # print(lengthList2)

    answer = []
    indexer = 0
    indexer2 = 0

    # This is the code resulting from the psuedo code at the top of the program.
    while indexer2 < lengthList2 and indexer < lengthList:
        if valueList[indexer] == valueList2[indexer2]:
            answer.append(valueList[indexer])
            indexer += 1
            indexer2 += 1
        elif valueList[indexer] < valueList2[indexer2]:
            indexer += 1
        else:
            indexer2 += 1
    return answer

# Prints the inverted index from Hw1P1
print_inverted_index(return_inverted_index())

# we use the function we just created above to print the results of the following queries:
print("asus, google")
print(boolean_query_evaluation("asus", "Google"))
print("screen, bad")
print(boolean_query_evaluation("screen", "bad"))
print("great, tablet")
print(boolean_query_evaluation("great", "tablet"))

# below here is testing of functions, and use cases.

# print(mod_word("ASUS"))
# print(mod_word("GoOgLe"))

# string1 = "DOC_8.txt"
# string2 = "DOC_7.txt"

# if string1 > string2:
#    print("string1 > string2")
# else:
#     print("string1 < string2")
# ['DOC_6.txt', 'DOC_7.txt', 'DOC_8.txt']
# valList = ii["asu"]
# print(valList)
# valList2 = ii["googl"]
# print(valList2)

# print("Inverted Index")

# boolean_query_evaluation("asus", "google")
# boolean_query_evaluation("screen", "bad")
# boolean_query_evaluation("great", "tablet")
