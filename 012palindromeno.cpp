#include<iostream>
using namespace std;
int main() {
    int n,d,rev=0,i,temp;
    cout<<"Enter any no."<<endl;
    cin>>n;
    temp=n;
    for(i=1;n>0;i++){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    cout<<"Reverse of no..="<<rev<<endl;
    if(rev==temp)
    cout<<"palindrome no."<<endl;
    else
    cout<<"not palindrome no."<<endl;
}