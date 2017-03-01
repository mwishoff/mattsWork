# find all pairs in an array that their sum is the number passed into the array.
# time complexity: O(2n), Space complexity: O(n)

def findAllPairs(number, array):
    pairs = []

    dictionary = {}
    for num in array:
        dictionary[num] = num

    for num in array:
        if (number - num) in dictionary:
            tempTuple = (num, number - num)
            pairs.append(tempTuple)

    return pairs


def main():
    lst = [1, 2, 3, -2, 4, 5, 6, -4, 7, 8, -5, 9, 10, -7]
    print(findAllPairs(3, lst))

main()
