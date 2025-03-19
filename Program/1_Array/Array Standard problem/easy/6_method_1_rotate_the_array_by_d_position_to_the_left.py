def rotate_arr(arr, pos):
    
    size = len(arr)
    if pos > size:
        return -1
    temp = arr.copy()
    # temp = []
    # temp.extend(arr)
    count = 0
    for i in range(pos-1, size):
        temp[count] = arr[i]
        count+=1

    for i in range(pos-1):
        temp[count] = arr[i]
        count +=1

    return temp


l = [7, 5, 4, 11, 2, 10, 13,45,101]
pos = 3
print(rotate_arr(l,pos))