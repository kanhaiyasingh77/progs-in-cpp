#include<iostream>
using namespace std;
int main()
{
    int a, b;
    try 
    {
        cout<<"Enter value for a and b:"<<endl;
        cin>>a>>b;
        if(b==0)
        {
            throw b;
        }
        cout<<"Division = "<<a/b<<endl;

    }
    catch(int x)
    {
        cout<<"value of b ="<<x<<endl;
        cout<<"INvalid value! Renter value for b:"<<endl;
        cin>>b;
        cout<<"Div= "<<a/b;
    }
}