//calculate the sum of the digits of a number until the number is a single digit without using looping statements//
#include<iostream>
using namespace std;
int main(){
int num,res;
cout<<"Enter The Number:";
cin>>num;
if(num>0){
    res=(num%9==0)?9:num%9;
}
else{
    res=0;
    }
    cout<<endl<<"The sum of its digit is "  <<res;
    return 0;
}




