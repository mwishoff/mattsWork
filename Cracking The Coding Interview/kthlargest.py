import heapq
from heapq import heappush, heappop


def kthLargest(array, kth):
    heap = []
    for elem in array:
        if len(heap) == 0:  # if it's the first item go ahead and push it onto the heap.
            heapq.heappush(heap, elem)
        elif len(heap) == kth:
            if elem > heap[0]:
                heapq.heapreplace(heap, elem)
        elif len(heap) < kth:
            heapq.heappush(heap, elem)

    return heap[0]


def main():
    array = [1, 21, 3, 4, 5, 6, 7, 8, 9, 0, -2, 11]
    print(kthLargest(array, 1))
    print(kthLargest(array, 2))
    print(kthLargest(array, 5))
    print(kthLargest(array, 11))

main()
