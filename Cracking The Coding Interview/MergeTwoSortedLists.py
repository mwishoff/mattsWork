

def mergeLists(lst1, lst2):
    i = 0
    j = 0
    mergedList = []

    while len(lst1) > i and len(lst2) > j:
        if lst1[i] < lst2[j]:
            mergedList.append(lst1[i])
            i += 1
        elif lst2[j] < lst1[i]:
            mergedList.append(lst2[j])
            j += 1
        elif lst1[i] == lst2[j]:
            mergedList.append(lst1[i])
            i += 1
            j += 1

    return mergedList


def main():
    list1 = [-1, 1, 3, 4, 5, 7, 8, 12, 14, 17, 22]
    list2 = [0, 2, 4, 6, 9, 13, 15, 18, 21]
    print(mergeLists(list1, list2))

main()
