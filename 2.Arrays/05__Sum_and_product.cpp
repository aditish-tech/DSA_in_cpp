#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements you want : ";
    cin>>n;
    int arr[n],i,sum=0,prod=1;
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    cout<<"Array elements are : ";
     for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
    }

    for(int i=0;i<n;i++){
    sum+=arr[i];
    prod*=arr[i];
    }
    cout<<endl<<"The sum of the elements in this array is : "<<sum;
    cout<<endl<<"The Product of the elements in this array is : "<<prod;
}