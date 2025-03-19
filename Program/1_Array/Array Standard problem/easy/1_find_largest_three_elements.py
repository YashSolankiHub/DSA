INT_MIN = -2**63

def find3Largest(arr):
    first, second, third = INT_MIN, INT_MIN, INT_MIN

    if len(arr) < 3:
        return -1

    for i in arr:
        if i > first:
            third = second
            second = first
            first = i
        elif i > second :
            third =second
            second = i
        else:
            third = i

    return first, second , third


l = [10,15,80,65,189,256,36,563,256,782]
print(find3Largest(l))