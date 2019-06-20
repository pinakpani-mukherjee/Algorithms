#include<iostream>
using namespace std;

int search(int arr[],int x, int n)
{
    for (int  i = 0; i < n; i++)
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
    cout<<"Please enter a value that you want to search\n";
    int x;
    cin>>x;
    int return_val = search(arr,x,n);
    (return_val == -1) ? cout<<"The number you have entered is not present"
                       : cout<<"The number is present in the "<<return_val<<"Position";                  

    return 0;
}


