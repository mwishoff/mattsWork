#By: Matthew Wishoff
#Date: 8/31/16
# Homework #1 Part 1

# Part 1: Inverted Index Construction
# Write a program that creates an inverted index for a given set of documents. As part of inverted
# index creation, your program should apply the following pre-processing steps to the input
# documents, in the given order.
# 1. Tokenization: Consider every non-alphanumeric character as word boundary.
# 2. Case normalization: Use all lower case.
# 3. Stemming: For C++ and Java use the Krovetz stemmer at:
# http://sourceforge.net/projects/lemur/files/lemur/KrovetzStemmer-
# 3.4/KrovetzStemmer-3.4.tar.gz
# For Python use the Porter stemmer at: http://www.nltk.org/api/nltk.stem.html
# 4. Stopwords removal: Remove the following words: the, is, at, of, on, and, a

import os, sys, re
import nltk
import collections

stemmer = nltk.stem.PorterStemmer()
counter = 0
numberOfDocs = 0
tempList = []
listOfWords = []
trimmedWords = []
documents = []
content = ""
CWD = os.getcwd()  # Aquires current working directory.
print(CWD)  # Prints current working directory for debugging
arrayOfFiles = []  # Will be where I store the file names.
folder = "/documents"

CurrDir = CWD + folder  # Appending directories to get to the correct one.
CWD = CurrDir

os.chdir(CWD)  # Changes CWD to the directory where the files are kept.

print(CWD)  # Prints current working directory for debugging

# I chose to break up the files into 10 separate documents, because it allowed me to write a program
# that was good for N files, instead of just 1 file. In this trivial situation, it is a little silly to
# break it up into 10 files. Although if there were 100 files I believe my program would still be able to handle it.
for File in os.listdir(CWD):  # Grabs the files in the directory
    if ".txt" in File:
        numberOfDocs += 1
        arrayOfFiles.append(File)

for i in range(numberOfDocs):
    documents.append([])
    tempList.append([])

# removing all non alpha-numeric characters
# I chose to do the stop word removal before the stemming as it seemed to make sense to do it in this for loop.
# Also I didn't know if the stemmer would change any of the stop words, so this was the safe bet on removing the
# stop words before stemming.
for File in arrayOfFiles:
    f = open(File, "r+")
    content = f.read().replace('\n', '')
    content = content.replace('`', '')
    content = content.replace('~', '')
    content = content.replace('!', '')
    content = content.replace('@', '')
    content = content.replace('#', '')
    content = content.replace('$', '')
    content = content.replace('%', '')
    content = content.replace('^', '')
    content = content.replace('&', '')
    content = content.replace('*', '')
    content = content.replace('(', '')
    content = content.replace(')', '')
    content = content.replace('_', '')
    content = content.replace('=', '')
    content = content.replace('+', '')
    content = content.replace('[', '')
    content = content.replace('{', '')
    content = content.replace(']', '')
    content = content.replace('}', '')
    content = content.replace(';', '')
    content = content.replace(':', '')
    content = content.replace(',', '')
    content = content.replace('<', '')
    content = content.replace('.', '')
    content = content.replace('>', '')
    content = content.replace('/', '')
    content = content.replace('?', '')
    content = content.replace('|', '')
    content = content.replace('"', '')
    content = content.replace('\'', '')
    content = content.replace(" the ", ' ')
    content = content.replace(" is ", ' ')
    content = content.replace(" at ", ' ')
    content = content.replace(" of ", ' ')
    content = content.replace(" on ", ' ')
    content = content.replace(" and ", ' ')
    content = content.replace(" a ", ' ')

    listOfWords = content.split()
    documents[counter] = content.split()
    counter += 1
    content = " "

    for word in listOfWords:
        lowerCaseWord = word.lower()
        trimmedWords.append(lowerCaseWord)

    stemmedWords = []

    for word in trimmedWords:
        stemmedWords.append(stemmer.stem(word))

    f.close()

# print(stemmedWords)

# step 1
# need to sort the words
sortWords = sorted(stemmedWords)
# print(sortWords)
# step 2
# need to add words to an ordereddict, (ordered dictionary)
# When we add to the orderedDict the key will be the word, and the value will be the list of files it appears in.

# constructing the inverted index
# Lower case the doc words
counter = -1
for doc in documents:
    counter += 1
    for word in doc:
        tempList[counter].append(word.lower())

documents = []

for k in range(numberOfDocs):
    documents.append([])

# Stem the doc words
counter = -1
for doc in tempList:
    counter += 1
    for word in doc:
        documents[counter].append(stemmer.stem(word))

# print(arrayOfFiles)[ u; uj'
# I decided to use an ordered dictionary, instead of a regular dictionary so that
# the collection remains sorted. An orderedDict remembers the order in which the entries are added.
# While a dictionary inherently has no order. A inverted index being alphabetical I chose the OrderedDict.
# The other advantage you get from a ordered dictionary is a roughly O(1) look up time which makes it better
# then using a lists of lists.

InvertedIndex = collections.OrderedDict()
docsContainingWord = []
for word in sortWords:
    currentDoc = ""
    counter = -1
    for doc in documents:

        if currentDoc != doc:
            counter += 1
            currentDoc = doc

        if word in doc:
            docsContainingWord.append(arrayOfFiles[counter])

    if word not in InvertedIndex:
        InvertedIndex[word] = docsContainingWord

    docsContainingWord = []


def print_inverted_index(invertedindex):
    for key,val in invertedindex.items():
        docfreq = str(len(val))
        # indexEntry = k + " : " + docFreq + " : " + v
        indexentry = "".join([key, " : ", docfreq, " : "])
        print(indexentry, val)


def return_inverted_index():  # Returns the inverted index from Hw1P1
    return InvertedIndex


def mod_word(token_word):  # makes the given word lowercase and stemmed with the stemmer, and then returns it.
    token_word = token_word.lower()
    token_word = stemmer.stem(token_word)
    return token_word

# print_inverted_index(InvertedIndex)