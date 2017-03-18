

def string_to_list(string, lengthlist):
    j = 0
    tempString = ""

    for i in range(len(string)):
        tempString += "".join(string[i])
        if lengthlist[j] == len(tempString):
            lengthlist[j] = tempString
            tempString = ""
            j += 1

    return lengthlist


def list_to_string(lst):
    string = ""

    for index in range(len(lst)):
        string += "".join(lst[index])
        length = len(lst[index])
        lst[index] = length

    return string, lst


def main():
    lst = ["this", "is", "the", "string", "we", "will", "work", "with"]

    stringLengthList = list_to_string(lst)
    print(stringLengthList[0])
    print(stringLengthList[1])

    print("outputList:")

    lst = string_to_list(stringLengthList[0], stringLengthList[1])
    print(lst)

main()
