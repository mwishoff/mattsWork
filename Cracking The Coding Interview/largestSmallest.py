

def largestSmallest(array):
    largest = 0
    smallest = 999999999

    for num in array:
        if num < smallest:
            smallest = num
        if largest < num:
            largest = num

    return [smallest, largest]


def main():
    array = [1, 21, 3, 4, 5, 6, 7, 8, 9, 0, 11]
    print(largestSmallest(array))

main()