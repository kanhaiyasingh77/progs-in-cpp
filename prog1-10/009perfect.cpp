#include<iostream>
using namespace std;
int main() {
    int i, n, fact=0;
    cout << "Enter the no." <<endl;
    cin >>n;
    for(i=1;i <= n / 2;i++) {
        if(n%i == 0)
        fact = fact + i;
    }
    if(fact == n)
    cout << "perfect no." <<endl;
    else
    cout << "not perfect no." <<endl;
    return 0;
}