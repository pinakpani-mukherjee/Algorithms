#include <stdio.h>

int search(int arr[],int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(arr[i] == x) 
            return i;
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {3,12,32,44,332,223,5,77,4,55,98};
    int n = sizeof(arr)/sizeof(arr[1]);
    printf("Please enter a digit that you would like to search\n");
    int x;
    scanf("%d",&x);
    int result = search(arr,n,x);
    (result == -1)?printf("Element is not present")
                  :printf("Element is present in %d position",result);
    return 0;
}
