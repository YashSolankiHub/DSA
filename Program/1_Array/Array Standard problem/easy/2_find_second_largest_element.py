def find_second_largest(arr):
    max_element = max(arr)
    second_max = arr[0]
    for i in range(len(arr)):
        if arr[i] > second_max and arr[i] != max_element:
            second_max = arr[i]
    
    return second_max


l = [10,15,80,65,189,256,36,563,256,782]
print(find_second_largest(l))
