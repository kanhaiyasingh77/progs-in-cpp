#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    string f;
    char ch;
    int l=1;
    cout<<"Enter File Name :- \n";
    cin>>f;
    fin.open(f);
    if((ch=fin.get())==EOF)
    {
        cout<<"Zero Lines in File";
        return 0;
    }
    else
    {
        while ((ch=fin.get())!=EOF)
        {
            if (ch=='\n')
            {
                l++;
            }
        }
        cout<<"Total number of Lines = "<<l;
        
    }
    fin.close();
}