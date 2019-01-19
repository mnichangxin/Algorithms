import sys


def merge(left, right):
    result = []
    i = 0
    j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result += left[i:]
    result += right[j:]
    return result


def mergeSort(arr):
    N = len(arr)
    if (N <= 1):
        return arr
    mid = N // 2
    left = mergeSort(arr[:mid])
    right = mergeSort(arr[mid:])
    return merge(left, right)

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(mergeSort(arr))
