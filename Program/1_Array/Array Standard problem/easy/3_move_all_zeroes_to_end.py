def move_all_zero(arr):
    count = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[count] = arr[i]
            count+=1
    
    while count < len(arr):
        arr[count] = 0
        count+=1
    return arr



l=[1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9]
print(move_all_zero(l))


