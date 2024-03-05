#include<iostream>
using namespace std;
int main() {
    int i, n1, n2, sum1=0, sum2=0;
    cout << "Enter the first no." <<endl;
    cin >>n1;
    cout << "Enter the second no." <<endl;
    cin >>n2;
    for(i = 1 ;i <= n1 / 2;i++){
        if(n1 % i == 0)
        sum1 = sum1 + i;
    }
    for(i = 1 ;i <= n2 / 2;i++){
        if(n2 % i == 0)
        sum2 = sum2 + i;
    }
    if(n1 == sum2 && n2 == sum1)
    cout << "Amicable number" <<endl;
    else
    cout << "Not Amicable number" <<endl;

    return 0;
}