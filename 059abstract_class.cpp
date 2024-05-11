#include<iostream>
using namespace std;
class A 
{
    public:
    virtual void show()=0;
    void display()
    {
        cout<<"Hello! kanhaiya..."<<endl;
    }
};
class B: public A 
{
    public:
    void show()
    {
        cout<<"Hello bihar";
    }
};
int main()
{
    B t;
    t.display();
    t.show();
}