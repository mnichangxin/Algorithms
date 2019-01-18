import sys


def bubble(arr):
    for i in range(len(arr)):
        for j in range(1, len(arr) - i):
            if arr[j - 1] > arr[j]:
                temp = arr[j - 1]
                arr[j - 1] = arr[j]
                arr[j] = temp
                '''OR
                arr[i - 1], arr[i] = arr[i], arr[i - 1]
                '''
    return arr

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(bubble(arr))
