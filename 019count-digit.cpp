//to count how many digits are present/given even more than 10  digits
#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<digits<<endl;
    return 0;
}