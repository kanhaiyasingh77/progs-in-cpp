#include<iostream>
using namespace std;
int main() {
    int n, i;
    cout << "enter the no." << endl;
    cin >> n;
    for(i=2;i <= n / 2;i++){
        if(n%i == 0){
            cout << "not prime" << endl;
            break;
        }      
    }
    if(i > n/2)
        cout << "prime no." <<endl;
    return 0;
}