#include<iostream>
using namespace std;
int main()
{
    int arr[7],i;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<7;i++){
    cin>>arr[i];
    }
    cout<<"The array elements are"<<endl;
    for(i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}