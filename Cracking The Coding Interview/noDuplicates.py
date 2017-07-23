from string import ascii_lowercase


# init the alphabet hash.
def init_alphabet():
    alphabet = {}
    for letter in ascii_lowercase:
        alphabet[letter] = 0

    return alphabet


def remove_duplicates(string):
    alphabet = init_alphabet()
    newString = ""
    for letter in string:
        if alphabet[letter] == 0:
            newString += letter
            alphabet[letter] = 1

    return newString


def unit_test_remove_duplicates():
    print("Remove duplicates unit test")
    print("\"hello\" - result:", remove_duplicates("hello"), "---> Expected: helo")
    print("\"matt\" - result:", remove_duplicates("matt"), "---> Expected: mat")
    print("\"abcdefghi\" - result:", remove_duplicates("abcdefghi"), "---> Expected: abcdefghi")
    print("\"jklmnopqr\" - result:", remove_duplicates("jklmnopqr"), "---> Expected: jklmnopqr")
    print("\"stuvxyz\" - result:", remove_duplicates("stuvxyz"), "---> Expected: stuvxyz")


def main():
    unit_test_remove_duplicates()

main()
