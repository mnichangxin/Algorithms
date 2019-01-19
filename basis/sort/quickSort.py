import sys


def partition(arr, left, right):
    i = left
    j = right
    k = arr[left]
    while i < j:
        while i < j and arr[j] > k:
            j -= 1
        if i < j:
            arr[i] = arr[j]
            i += 1
        while i < j and arr[i] < k:
            i += 1
        if i < j:
            arr[j] = arr[i]
            j -= 1
    arr[i] = k
    return i


def quickSort(arr, left, right):
    if left > right:
        return
    k = partition(arr, left, right)
    quickSort(arr, left, k - 1)
    quickSort(arr, k + 1, right)
    return arr


for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(quickSort(arr, 0, len(arr) - 1))
