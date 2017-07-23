# Convert string to integer without using atoi


def atoi(string):
    num = 0
    zeroASCII = 48
    for letter in string:
        num *= 10
        num += ord(letter) - zeroASCII

    return num


def main():
    str = "1234"
    num = atoi(str)
    num += 1
    print(num)


main()
