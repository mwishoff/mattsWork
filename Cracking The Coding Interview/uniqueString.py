# Checks to see if the string is unique
# python 3.4


def all_unique(word):
    letterhash = {}
    for letter in word:
        if letter in letterhash:
            return False
        letterhash[letter] = " "
    return True

# unit tests for allUnique function.


def unit_test_all_unique():
    print("All unique characters unit test")
    print("\"word\" - result:", all_unique("word"), "---> Expected: True")
    print("\"worrd\" - result:", all_unique("worrd"), "---> Expected: False")
    print("\"  word\" - result:", all_unique("  word"), "---> Expected: False")
    print("\"word$123\" - result:", all_unique("word$123"), "---> Expected: True")
    print("\"worrd\" - result:", all_unique("wordd"), "---> Expected: False")
    print("\"woord\" - result:", all_unique("woord"), "---> Expected: False")


def main():
    unit_test_all_unique()

main()
