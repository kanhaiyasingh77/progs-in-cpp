#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
};
class B : public A
{
    int b;
    public:
    void input()
    {
        cout<<"Enter the value for a and b:- "<<endl;
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"Sum = "<<a+b;
    }
};
int main()
{
    B obj;
    obj.input();
    obj.sum();
}