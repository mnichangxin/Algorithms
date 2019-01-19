import sys


def shellSort(arr):
    N = len(arr)
    h = 1
    while h < N // 3:
        h = h * 3 + 1
    while h >= 1:
        for i in range(h, N):
            for j in range(i, 0, -h):
                if arr[j - h] > arr[j]:
                    arr[j - h], arr[j] = arr[j], arr[j - h]
                else:
                    break
        h = h // 3
    return arr

for line in sys.stdin:
    arr = list(map(int, line.split()))
    print(shellSort(arr))
