# replace the spaces in a string with %20 O(n) time.


def replaceSpaces(string):
    retString = []

    for char in string:
        if char == ' ':
            retString.append("%20")
        else:
            retString.append(char)

    return "".join(retString)


def main():
    print(replaceSpaces("This is a test"))
    print(replaceSpaces(" "))
    print(replaceSpaces(""))

main()
