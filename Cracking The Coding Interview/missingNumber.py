

def find_missing(array):
    length = len(array)
    length2 = length + 1
    sum1 = (length * (length + 1) / 2)
    sum2 = (length2 * (length + 1) / 2)

    print(sum2 - sum1)

def main():
    # 15 is missing bettwen 1 and 30
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30]

    find_missing(array)

main()
