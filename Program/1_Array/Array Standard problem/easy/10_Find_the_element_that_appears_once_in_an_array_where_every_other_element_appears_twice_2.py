def find_once_element(arr):
    size = len(arr)
    ele =[]
    
    for i in arr:
        if arr.count(i) <2:
            ele.append(i)

    return ele


        

l = [7, 11, 3, 7, 2, 11, 3,0, 8899, 8899]
print(find_once_element(l))