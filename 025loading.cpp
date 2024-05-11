//Using macro
#include<iostream>
using namespace std;

#define add(a,b) (a+b)

int main(){
    int x = 34;
    int y = 56;
    int sum = add(x,y);
    cout<<"The sum of " << x <<" and "<<y<<" = "<<sum<<endl;
    return 0;
}