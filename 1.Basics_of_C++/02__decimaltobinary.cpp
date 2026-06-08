#include<iostream>
using namespace std;
int main(){
int dec_num,rem;
int pow=1,ans=0;
cout<<"Enter the decimal number you wish to convert to binary:"<<endl;
cin>>dec_num;
while(dec_num>0){
 rem=dec_num%2;
 dec_num/=2;
ans+=(rem*pow);
pow*=10;
}
cout<<"The binary  number for this decimal is:"<<endl;
cout<<ans;
}