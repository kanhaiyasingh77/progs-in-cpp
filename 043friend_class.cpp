#include<iostream>
using namespace std;
class A 
{
    private:
    int prv;
    protected:
    int prt;
    public:
    int pub;

    A()
    {
        prv = 20;
        prt = 34;
        pub = 30;
    }
    friend class B;
};
class B 
{
    public:
    void show(A &T)
    {
        cout<<T.prv<<endl;
        cout<<T.prt<<endl;
        cout<<T.pub;
    }
};
int main()
{
    A p;
    B z;
    z.show(p);

}