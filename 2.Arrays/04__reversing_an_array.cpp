#include<iostream>
using namespace std;

void reversearray(int arr[],int size)
{
    int start = 0,end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={34,2,6,87,5,2,11,9};
    int size = 8;
    reversearray(arr,size);
    for(int i=0;i<size;i++)
    { 
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}