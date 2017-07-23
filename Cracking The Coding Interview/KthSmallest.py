import heapq
from heapq import heappush, heappop


def kthSmallest(array, kth):
    heap = []
    for elem in array:
        if len(heap) == 0:  # if it's the first item go ahead and push it onto the heap.
            heapq.heappush(heap, elem * -1)
        elif len(heap) == kth:
            if elem * -1 > heap[0]:
                heapq.heapreplace(heap, elem * -1)
        elif len(heap) < kth:
            heapq.heappush(heap, elem * -1)

    return heap[0] * -1


def main():
    array = [1, 21, 3, 4, 5, 6, 7, 8, 9, 0, -2, 11]
    print(kthSmallest(array, 1))
    print(kthSmallest(array, 2))
    print(kthSmallest(array, 3))
    print(kthSmallest(array, 4))
    print(kthSmallest(array, 5))
    print(kthSmallest(array, 6))
    print(kthSmallest(array, 7))
    print(kthSmallest(array, 8))
    print(kthSmallest(array, 9))
    print(kthSmallest(array, 10))
    print(kthSmallest(array, 11))

main()
