import sys


def selectSort(arr):
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[i]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(selectSort(arr))
