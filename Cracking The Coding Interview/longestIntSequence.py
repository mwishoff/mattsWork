# The array is sorted.
# Runs O(n) time, O(n) space.
# Could be O(1) space if you just return the index range of the largest sequence.

def longestSequence(array):
    TempSequence = []
    longestSeq = []

    for num in array:
        if not TempSequence:
            TempSequence.append(num)
        elif TempSequence[len(TempSequence) - 1] + 1 == num:
            TempSequence.append(num)
        else:
            if len(TempSequence) > len(longestSeq):
                longestSeq = TempSequence

            TempSequence = []

    return longestSeq


def main():
    array = [0, 2, 4, 5, 6, 7, 8, 20,
             21, 32, 42, 43, 44, 45, 46, 47,
             50, 51, 55, 64, 65, 78]
    print(longestSequence(array))


main()
