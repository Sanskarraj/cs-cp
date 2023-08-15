import heapq

def k_largest_elements(arr, k):
    min_heap = arr[:k]
    heapq.heapify(min_heap)

    for num in arr[k:]:
        if num > min_heap[0]:
            heapq.heappop(min_heap)
            heapq.heappush(min_heap, num)

    return min_heap

if __name__ == "__main__":
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    result = k_largest_elements(arr, k)
    print(*result)
