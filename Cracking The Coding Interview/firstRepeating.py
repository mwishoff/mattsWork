# 14. How find the first repeating element in an array of integers?
# Given an array of integers, find the first repeating element in it. We need
# to find the element that occurs more than once and whose index of the first occurrence is smallest.

# O(N) time, O(N) space. N being the number of elements in the given array.

def firstRepeat(array):
    dictionary = {}
    firstrepeat = 99999999999999999
    index = 0

    for elem in array:
        if elem not in dictionary:
            dictionary[elem] = index
        else:
            if dictionary[elem] < firstrepeat:
                firstrepeat = elem
        index += 1

    return firstrepeat


def main():
    array = [7, 1, 2, 3, 4, 2, 3]
    print(firstRepeat(array))

main()
