#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value :-"<<endl;
        cin>>x;
    }
    void putdata()
    {
        cout<<"value = "<<x<<endl;
    }
    A operator+(A &z)
    {
        A t;
        t.x= x+z.x;
        return t;
    }
};
int main()
{
    A a,b,c;
    a.getdata();
    b.getdata();
    a.putdata();
    b.putdata();
    c = a+b;
    cout<<"value of add operator = ";
    c.putdata();
}