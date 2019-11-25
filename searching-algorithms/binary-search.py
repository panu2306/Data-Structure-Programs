def binarySearch(a, start, end, searchElement):
    mid = (start + end) // 2
    if(start <= end):
        if(a[mid] == searchElement):
            return 1
        if(element < a[mid]):
            return binarySearch(a, start, mid-1, searchElement)
        else:
            return bianrySearch(a, mid+1, end, searchElement)
    return -1

a = [1, 5, 2, 4, 3]
a = sorted(a)
start = 0
end = len(a)
searchElement = 3
result = binarySearch(a, start, end, searchElement)
print("Element is Present") if(result == 1) else print("Element is not present")
