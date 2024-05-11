#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fileIn("raja");
	int roll;
	string name;
	char ch;
	do
	{
		cout<<"Enter roll number and name"<<endl;
		cin>>roll>>name;
		fileIn<<roll<<name<<endl;
		cout<<"More(Y/N):"<<endl;
		cin>>ch;
	}while(ch=='y');
	fileIn.close();
	return 0;
}