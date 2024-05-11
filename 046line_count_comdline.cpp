#include <iostream>
#include <fstream>
using namespace std;
//compiler: g++ <filename>enter
//execute: ./<filename> arguments
int main(int argc, char *argv[])
{
    ifstream fin;
    char ch;
    int l=1;
    if(argc<2||argc>2)
    {
        cout<<"Bad command"<<endl;
        return 0;
    }
    fin.open(argv[1]);
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