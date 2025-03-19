def seg_even_odd(arr):
    start = 0
    end = len(arr) -1
    temp = []
    temp.extend(arr)

    # print(temp)

    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            temp[start] = arr[i]
            start+=1
        else:
            temp[end] = arr[i]
            end -=1

    return temp


    
l  =[7,5,4,11,2,11,10,13,14,18,50]
print(seg_even_odd(l))
