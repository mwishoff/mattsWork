#  worst case Time complexity O(N + M)
#  N being the number of elements in the first array
#  M being the number of elements in the second array


def find_intersection(array1, array2):
    i = 0
    j = 0
    intersection = []

    while len(array1) > i and len(array2) > j:
        if array1[i] == array2[j]:
            intersection.append(array1[i])
            i += 1
            j += 1
        elif array1[i] > array2[j]:
            j += 1
        elif array1[i] < array2[j]:
            i += 1
        else:
            print("Something went wrong")

    return intersection


def main():
    arr1 = [1, 2, 3, 4, 5, 6]
    arr2 = [4, 5, 6, 7, 8, 9]
    print(find_intersection(arr1, arr2))

main()
