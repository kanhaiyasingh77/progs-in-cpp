#include<iostream>
using namespace std;

inline void sum(int a, int b){
    cout<<"Sum = "<<a+b;
}
inline int sub(int a, int b){
    cout<<"\nSub = "<<a-b;
}
int main(){
    sum(23, 45);
    sub(67, 34);
}