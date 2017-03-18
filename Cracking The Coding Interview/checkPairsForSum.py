# find all pairs in an array that their sum is the number passed into the array.
# time complexity: O(2n), Space complexity: O(n)


def findAllPairs(number, array):
    pairs = set()
    numbers = set(array)

    for num in array:
        if (number - num) in numbers and (number - num, num) not in pairs:
            tempTuple = (num, number - num)
            pairs.add(tempTuple)

    return pairs


def findSumPairs(total, arr):
    ret = set()
    values = set(arr)

    for i in arr:
        if (total - i) in values and total-i != i:
            if i > total-i:
                ret.add((total-i, i))
            else:
                ret.add((i, total-i))

    return sorted(ret, key=lambda x: x[0])


def main():
    lst = [1, 2, 3, -2, 4, 5, 6, -4, 7, 8, -5, 9, 10, -7]
    lst2 = [1, 2, 3, 4, 5, 6, 7]
    print(findAllPairs(3, lst))
    print(findAllPairs(10, lst2))
    print(findSumPairs(3, lst))

main()
