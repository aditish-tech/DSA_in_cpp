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
    int min_index;
    for(i=0;i<6;i++){
    if(arr[i]<smallest){
        smallest=arr[i];//smallest element
         min_index=i;//index of smallest element
    }
}
    cout<<endl<<"Smallest element is "<<smallest;
    cout<<endl<<min_index;

int largest = INT_MIN;
int max_index;
    for(i=0;i<6;i++){
    if(arr[i]>largest){
        largest=arr[i];//largest element
        max_index=i;//index of largest element
    }
}
    cout<<endl<<"Largest element is "<<largest;
    cout<<endl<<max_index;

}
