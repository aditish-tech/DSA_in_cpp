#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you wish to add in an array: ";
    cin>>n;
    int arr[n],i;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }

    int min = INT_MAX;
    for(i=0;i<n;i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"The maximum value present in the array is: "<<max<<endl;
    cout<<"The minimum value present in the array is: "<<min<<endl;
    swap(max,min);
    cout<<"After swapping max is now: "<<max<<endl<<"After swapping min is now: "<<min<<endl;
}