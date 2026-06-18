#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // way 1 -Integer vector
    vector<int>vec={3,4,5,7,4};
    for(int i: vec){
        cout<<i<<endl;
    }

    //way 2 - Char vector with size and default value
    vector<char>vec(4,'v'); //way2
    for (char i:vec){
        cout<<i<<endl;
    }
    
}