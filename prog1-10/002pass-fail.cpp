#include<iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your total marks" << endl;
    cin >> marks;
    (marks>=50)? cout << "Pass": cout << "Fail";
}