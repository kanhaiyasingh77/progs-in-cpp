#include<iostream>
using namespace std;
int main() {
    int i,j,n[3][3]={{1,2,3},{6,65,45},{64,59,35}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cout<< *(*(n+i)+j) <<"\t";
            cout<<endl;
        }
    }
    return 0;
}