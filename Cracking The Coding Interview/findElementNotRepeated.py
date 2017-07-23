

def findElementNotRepeated(array):
    dictionary = {}
    not_repeated = 0

    for elem in array:
        if elem in dictionary:
            pass
        else:
            dictionary[elem] = 1
            not_repeated = elem
            
    return not_repeated


def main():
    array = [0, 1, 2, 0, 3, 4, 2, 1, 3]
    print(findElementNotRepeated(array))

main()