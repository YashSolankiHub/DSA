def count_tringle(arr):
    size = len(arr)
    count = 0
    for i in range(size):
        for j in range(i+1,size):
            for k in range(j+1, size):
                if arr[i] + arr[j] > arr[k] and arr[j] + arr[k] > arr[i] and arr[k] + arr[i] > arr[j]:
                    print(arr[i], arr[j], arr[k])
                    count+=1
    return count


l = [5,7,3,6,10,4]
print("Total Number of tringle:",count_tringle(l))