#include<iostream>
using namespace std;
int main() {
    int m, y;
    cout << "Enter the month no." << endl;
    cin >> m;
    cout << "Enter the year" << endl;
    cin >> y;
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "No. of days = 31 " <<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "No. of days = 30 " <<endl;
        break;
        case 2:{
        if((y % 4==0 || y % 400==0) && y % 100 != 0)
        cout << "No. of days = 29" << endl;
        else
        cout << "No. of days = 28 " <<endl;
        }
        break;
        default:
        cout << "INvalid input" <<endl;
    }
}