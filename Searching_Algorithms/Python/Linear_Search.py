def search(arr,x,n):
    i = 0
    for i in range(n):
        if arr[i] == x:
            return i;
    return -1
arr = [3,12,32,44,332,223,5,77,4,55,98]
x = int(input("Please enter a number that you would like to search"))
ret_val = search(arr,x,len(arr))
if ret_val == -1:
    print("The number does not exist")
else:
    print("The number is present in the {} position".format(ret_val))