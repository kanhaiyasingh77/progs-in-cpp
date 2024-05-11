#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fileOut("raja");
	int roll;
	string name;
	while(fileOut.eof()==0)
	{
		fileOut>>roll>>name;
		cout<<"roll:"<<roll<<"\t"<<"name:"<<name<<endl;	
	}
	fileOut.close();
}