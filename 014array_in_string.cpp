#include<iostream>
using namespace std;
int main() {
    int n[3]={1,2,3};
    int i;
    for(i=0;i<3;i++)
    {
        cout<< *(n+i)<<endl;
    }
    return 0;
}