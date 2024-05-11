#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
};
class B: public A
{
    protected:
    int b;
    public:
    void input()
    {
        cout<<"enter the value for a and b :-"<<endl;
        cin>>a>>b;
    }
};
class Sum: public B
{
    int sum;
    public:
    void add()
    {
        sum = a+b;
        cout<<"Sum = "<<sum;
    }
};
int main()
{
    Sum sm;
    sm.input();
    sm.add();
}
