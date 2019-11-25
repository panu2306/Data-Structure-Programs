def linearSearch(a, searchElement):
    arraySize = len(a)
    for i in range(0, arraySize):
        if(a[i] == searchElement):
            return 1
    return -1

a = [1, 4, 2, 5, 3]
searchElement = 5
result = linearSearch(a, searchElement)
print("Element is not present in array") if(result == -1) else  print("Element is present in array")
