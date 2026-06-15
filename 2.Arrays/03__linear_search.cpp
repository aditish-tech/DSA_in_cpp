#include<iostream>
using namespace std;
int linear_search(int arr[],int target,int size);
int main()
{
   int arr[] = {4,2,7,8,1,2,5};
   int size = 7;
   int target = 5;
   cout<< linear_search(arr,target,size);
   
}


int linear_search(int arr[],int target,int size)
{
   for(int i=0;i<size;i++)
   {
    if(arr[i]==target)
    {
        return i;
    }
   }
   return -1;
}