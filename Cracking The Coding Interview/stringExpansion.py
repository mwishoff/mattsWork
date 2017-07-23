# Given a string in the format 2[ab]3[c], decompress the string into ababccc

# thing to add: nested brackets use stack.
# more than 1 digit. - sum, current num being added. multiply the sum by 10, then add the next digit.


def parseString(string):
    loopCount = 0
    tmp_list = []
    expandedString = ""
    multiplier = 10

    for letter in string:
        if letter == "[":
            pass

        elif letter.isdigit():
            if tmp_list:
                expandedString += "".join(tmp_list)
                tmp_list = []
            loopCount *= multiplier
            loopCount += int(letter)

        elif letter.isalpha():
            tmp_list.append(letter)

        elif letter == "]":
            for x in range(loopCount):
                expandedString += "".join(tmp_list)
            loopCount = 0
            tmp_list = []

    if tmp_list:
        expandedString += "".join(tmp_list)

    return expandedString


def main():
    print("2[ab]3[c] - ", parseString("2[ab]3[c]"))
    print("ab2[cd] - ", parseString("ab2[cd]"))
    print("2[cd]ab - ", parseString("2[cd]ab"))
    print("2[ab]ddd3[c] - ", parseString("2[ab]ddd3[c]"))
    print("2[ab]10[c] - ", parseString("2[ab]10[c]"))
    print("4[c2[d]] - ", parseString("4[c2[d]]"))

main()
