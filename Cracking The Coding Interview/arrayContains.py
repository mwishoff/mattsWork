# O(n) checking if a number is in an array.

def arrayContains(num, array):
    for number in array:
        if number == num:
            return True
    return False


def main():
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    print(arrayContains(1, array))
    print(arrayContains(5, array))
    print(arrayContains(0, array))
    print(arrayContains(9, array))
    print(arrayContains(10, array))
    print(arrayContains(1, array))

main()
