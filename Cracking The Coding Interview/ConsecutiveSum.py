'''
    Given an array of positive integers, determine if there are
    consecutive numbers in the array that can be summed up to a target value.
'''


def consecSum(array, num):
    for i in range(len(array) - 1):
        if array[i] + array[i + 1] == num:
            return True

    return False


def main():
    arr = [1, 2, 4, 3, 5, 6, 7, 8, 9, 10]
    print(consecSum(arr, 6))

main()
