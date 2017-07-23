# find the max sum of consecutive numbers in the array.
# (Max sum pair, must be consecutive numbers)


def maxSumConsecutive(array):
    maxSum = 0

    # stops 1 before last element
    for i in range(len(array) - 1):
        if maxSum < array[i] + array[i + 1]:
            maxSum = array[i] + array[i + 1]

    return maxSum


def main():
    array = [1, 2, 3, 4, 50, 9, 51, 8, 9, 5, 6]
    print(maxSumConsecutive(array))

main()
