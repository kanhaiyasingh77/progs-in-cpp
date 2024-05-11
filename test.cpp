#include<iostream>
using namespace std;
int main()
{
	int n,c=0,i;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=2;i<=n/2;n=i++)
	{
		cout<<"not prime";
		break;
	}
	if(i>n/2){
		cout<<"prime";
		
	}
	return 0;
}