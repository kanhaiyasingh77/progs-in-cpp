//wap in c++ to implement constructor in inheritence
#include<iostream>
using namespace std;
class B
{
    protected:
    B()
    {
        cout<<"Hellow";
    }
};
class D : public B
{
    public:
    D()
    {
        cout<<"  hai"<<endl;
    }
};
int main()
{
    D T;
}