import sys


def bubbleSort(arr):
    for i in range(len(arr)):
        for j in range(1, len(arr) - i):
            if arr[j - 1] > arr[j]:
                temp = arr[j - 1]
                arr[j - 1] = arr[j]
                arr[j] = temp
                '''OR
                arr[j - 1], arr[j] = arr[j], arr[j - 1]
                '''
    return arr

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(bubbleSort(arr))
