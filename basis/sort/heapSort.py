import sys


def adjustHeap(arr, k, n):
    N = n - 1
    while 2 * k <= N:
        j = 2 * k
        if j < N and arr[j] < arr[j + 1]:
            j += 1
        if arr[k] < arr[j]:
            arr[k], arr[j] = arr[j], arr[k]
            k = j
        else:
            break


def heapSort(arr):
    n = len(arr) - 1
    for i in range(n // 2, 0, -1):
        adjustHeap(arr, i, len(arr))
    while n > 1:
        arr[1], arr[n] = arr[n], arr[1]
        adjustHeap(arr, 1, n)
        n -= 1
    return arr[1:]

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(heapSort(arr))
