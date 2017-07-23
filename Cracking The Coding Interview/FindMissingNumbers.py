from bitarray import bitarray


def MissingNumbers(array):
    bArray = bitarray(100)
    missingNums = []
    tempPair = []
    strList = []
    itr = iter(range(100))
    strRange = ""


    for num in array:
        bArray[num] = 1

    for i in itr:
        print(i)
        if bArray[i] == 0:
            tempPair.append(str(i))
            while bArray[i] == 0:
                print(i)
                try:
                    i = next(itr)
                except StopIteration:
                    break
            tempPair.append(str(i - 1))
            missingNums.append(tempPair)
            tempPair = []

    for pair in missingNums:
        if pair[0] == pair[1]:
            strList.append(pair[0])
            strList.append(", ")
        else:
            strList.append(pair[0])
            strList.append('-')
            strList.append(pair[1])
            strList.append(', ')

    return strRange.join(strList)


def main():
    array = []
    for i in range(90):
        if i < 40 or i > 60:
            array.append(i)

    array = [0, 2, 4, 6, 9, 13, 15, 18, 21, 22, 24, 25]


    print(MissingNumbers(array))

main()
