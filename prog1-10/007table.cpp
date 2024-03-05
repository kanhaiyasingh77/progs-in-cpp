#include<iostream>
using namespace std;
    int main() {
        int n, i;
        cout << "Enter the table number " << "\n";
        cin >> n;
        for(i=1;i<=10;i++){
            cout <<  i <<" X " << n << "  =  " << i * n << "\n";
        }
        return 0;
    }