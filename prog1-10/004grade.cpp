#include<iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your total marks" << endl;
    cin >> marks;
    if(marks < 0 && marks > 500)
        cout << "Invalid" << endl;
    else if(marks >= 300)
    cout << "Grade I" << endl;
    else if(marks >= 225)
    cout << "Grade II" << endl;
    else if(marks >= 150)
    cout << "Grade III" << endl;
    else
    cout << "fail" << endl;
}