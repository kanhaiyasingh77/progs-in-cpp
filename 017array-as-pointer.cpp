#include<iostream>
using namespace std;
int main()
{
    int r,c,n[10][10],i,j;
    cout<<"Enter the value of row and column: "<<endl;
    cin>>r>>c;
    cout<<"Enter the value for matrx "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            //cin>>n[i][j];
            cin>>*(*(n+i)+j);
        }
    }
    cout<<"values of matrix are"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            //cout<<n[i][j]<<"\t";
            cout<<*(*(n+i)+j)<<"\t";
        }
        cout<<"\n";
    }
}