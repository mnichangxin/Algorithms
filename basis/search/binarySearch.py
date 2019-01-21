def binarySearch(arr, key):
    l = 0
    r = len(arr) - 1
    while l <= r:
        mid = l + (r - l) // 2
        if key < arr[mid]:
            r = mid - 1
        else if key > arr[mid]:
            l = mid + 1
        else:
            return mid
    return -1
