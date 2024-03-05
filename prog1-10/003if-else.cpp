#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<< "Enter the marks" << endl;
    cin >> marks;

    if(marks >= 50)
        cout << "pass";
    else
        cout << "fail";
}