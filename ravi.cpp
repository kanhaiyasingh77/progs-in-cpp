#include<iostream>
#include<fstream>
 using namespace std;
   int main ()
   
   {
    ofstream fout("ravi");
	int roll;
	string name;
	char ch;
	do 
    {
	 cout <<"Enter roll nuumber and name" <<endl;
	 cin >>roll >>name;
	 fout<<roll <<name<<endl;
	 cout<<"more(y/n):"<<endl;
	 cin >>ch;
	 
	} while(ch == 'y');
	
	fout.close();
   }

   