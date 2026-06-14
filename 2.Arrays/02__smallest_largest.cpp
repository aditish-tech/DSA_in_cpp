#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6],i;
    cout<<"Enter any 6 elements"<<endl;
    for(i=0;i<6;i++)
    {
    cin>>arr[i];
    }
    cout<<"Array elements are"<<endl;
    for(i=0;i<6;i++)
    {
    cout<<arr[i]<<" ";
    }

    int smallest = INT_MAX;
    for(i=0;i<6;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}
    cout<<endl<<"Smallest element is "<<smallest;

int largest = INT_MIN;
    for(i=0;i<6;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
    cout<<endl<<"Largest element is "<<largest;
}