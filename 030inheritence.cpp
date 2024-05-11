#include<iostream>
using namespace std;
class B
{
    private:
    void M()
    {
        cout<<"Hey"<<endl;
    }
    protected:
    void N()
    {
        cout<<"hai"<<endl;
    }
    public:
    void P()
    {
        cout<<"bye"<<endl;
    }
};
class D: private B
{
    private:
    void X()
    {
        cout<<"India"<<endl;
    }
    protected:
    void Y()
    {
        N();
        P();
        X();
        cout<<"Hello"<<endl;
    }
    public:
    void Z()
    {
        Y();
        cout<<"patna";
    }
};
int main()
{
    D T;
    T.Z();
}