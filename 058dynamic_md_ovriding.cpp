#include<iostream>
using namespace std;
class A
{
    public:
    
    virtual void show()
    {
        cout<<"welcome"<<endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<"Bye"<<endl;
    }
};
int main()
{
    A *ptr;
    A t;
    ptr = &t;
    ptr -> show();
     
    B r;
    ptr = &r;
    ptr -> show();
}