'''
Given a string containing only English character,
find the first unique character in the string, upper and lower
cases should not be treated as the same character.
'''
from collections import OrderedDict


def uniqueChar(string):
    hash = {}

    for char in string:
        if char not in hash:
            hash[char] = 1
        else:
            hash[char] += 1

    for char in string:
        if hash[char] == 1:
            return char


def main():
    # print(uniqueChar("aabbscajdqpoeuxnlvcsad"))
    print(uniqueCharSol2("aabbscajdqpoeuxnlvcsad"))

main()
