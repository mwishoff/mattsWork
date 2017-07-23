

def intersection(array1, array2, array3):
    arr1Index = 0
    arr2Index = 0
    arr3Index = 0
    intersect = []

    while len(array1) > arr1Index and len(array2) > arr2Index and len(array3) > arr3Index:
        if array1[arr1Index] == array2[arr2Index] == array3[arr3Index]:
            intersect.append(array1[arr1Index])
            arr1Index += 1
            arr2Index += 1
            arr3Index += 1
        elif array1[arr1Index] < array2[arr2Index] and array1[arr1Index] < array3[arr3Index]:
            arr1Index += 1
        elif array2[arr2Index] < array1[arr1Index] and array2[arr2Index] < array3[arr3Index]:
            arr2Index += 1
        elif array3[arr2Index] < array1[arr1Index] and array3[arr2Index] < array2[arr2Index]:
            arr3Index += 1
        elif array1[arr1Index] == array2[arr2Index]:
            arr1Index += 1
            arr2Index += 1
        elif array1[arr1Index] == array3[arr3Index]:
            arr1Index += 1
            arr3Index += 1
        elif array2[arr2Index] == array3[arr3Index]:
            arr2Index += 1
            arr3Index += 1

    return intersect


def main():
    arr1 = [1, 2, 3, 4, 5, 6, 8, 31, 32]
    arr2 = [4, 5, 6, 7, 8, 9, 31, 44]
    arr3 = [5, 6, 7, 8, 10, 12, 15, 22, 31]

    print(intersection(arr1, arr2, arr3))

main()
