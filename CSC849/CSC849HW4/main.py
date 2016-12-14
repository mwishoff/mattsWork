#  this is the main file, and should be the only file executed by the grader.

from classes import *
from functions import *
# noinspection PyUnresolvedReferences,PyUnresolvedReferences
import os, sys, re
import nltk
import collections


def main():
    content = ""
    # will need to regex this if there are more than just 10 documents.
    docNames = ["DOC 1", "DOC 2", "DOC 3", "DOC 4", "DOC 5", "DOC 6", "DOC 7", "DOC 8", "DOC 9", "DOC 10"]
    fileArray = []
    counter = 0

    # this for loop goes through the document and splits it up into File objects
    # and are stored in the file array
    for files in os.listdir(os.getcwd()):
        if "documents.txt" in files:
            f = open(files, "r+")
            for line in f:
                if docNames[counter] in line:
                    pass  # does nothing.
                elif "</DOC>" in line:
                    # adding +1 to counter so that docID and doc name somewhat match.
                    fileArray.append(File(content, counter + 1, docNames[counter]))
                    counter += 1
                    content = ""
                else:
                    content += line

    # as a check I use the to_string method to print out
    # all the objects that I've stored in the fileArray.
    for file in fileArray:
        file.normalize()  # takes care of stemming, making everything lowercase, removing stop words, and tokenizing it.
        # if file.docID == 3:
        #     file.to_string()  # prints the attributes of the file to check if they were normalized.

    ii = InvertedIndex(fileArray)
    ii.print_ii()

    # for file in fileArray:
    #     file.to_string()
    # this is the query for homework 1, code can be found in functions.py:
    # homework1_query(ii)
    # this is the query for homework 2, code can be found in functions.py:
    # homework2_query(ii)
    print("")
    homework4_query(ii, fileArray)

main()
