def wave(arr):
    size = len(arr)
    for i in range(0,size-1,2):
        if arr[i] > arr[i+1]:
            temp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] =temp

    return arr


l = [7,3,2,10,5,21,15]
print(wave(l))