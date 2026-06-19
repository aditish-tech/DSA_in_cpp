#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={2,56,43,7,8,9};
    cout<<"size: "<<vec.size()<<endl;
    
    vec.push_back(6);
    vec.push_back(98);
    vec.push_back(45);
    cout<<"size after pushing back: "<<vec.size()<<endl;

    vec.pop_back();
    cout<<"The vector after poping back is: ";
    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl<<"The first value of the vector is: "<<vec.front()<<endl;
    cout<<"The last value of the vector is: "<<vec.back()<<endl;
    cout<<vec.at(4)<<endl;

}