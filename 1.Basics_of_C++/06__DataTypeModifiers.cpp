#include<iostream>
using namespace std;
int main()
{
    short int small = 7686 ;
    long int big = 859764898;
    long long int vvbig = 4839982923283787;
    signed int both = 7586483;
    unsigned int pos = 746833746;

    cout<<"short : "<< small <<endl;
    cout<<"long : "<< big <<endl;
    cout<<"long long : "<< vvbig <<endl;
    cout<<"signed : "<< both <<endl;
    cout<<"unsigned : "<< pos <<endl;

    cout<<"short : "<< sizeof(short) <<" bytes" << endl;
    cout<<"long : "<< sizeof(long)<< " bytes" <<endl;
    cout<<"long long : "<< sizeof(long long)<< " bytes"  <<endl;
    cout<<"signed : "<< sizeof(signed)<< " bytes"  <<endl;
    cout<<"unsigned : "<< sizeof(unsigned)<< " bytes" <<endl;

}