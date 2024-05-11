#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
};
class B
{
    protected:
    int b;
};
class Sum: public A, public B
{
    public:
    void input()
    {
        cout<<"Enter the value of a and b :- "<<endl;
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"Sum = "<<a+b;
    }
};
int main()
{
    Sum sm;
    sm.input();
    sm.sum();
}