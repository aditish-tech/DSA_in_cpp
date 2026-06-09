#include<iostream>
using namespace std;
int bintodec(int bin_num);
int main()
{
    int bin_num;
 cout<<"Enter the binary number you want to convert to decimal :"<<endl;
 cin>>bin_num;
 int ans = bintodec(bin_num);
  cout<<"The answer is :"<<endl;
 cout<<ans;
}

int bintodec(int bin_num){
    int rem,ans=0,pow=1;
    while(bin_num>0)
    {
        rem=bin_num%10;
        ans+=(rem*pow);
        bin_num/=10;
        pow=pow*2;
    }
return ans;
}