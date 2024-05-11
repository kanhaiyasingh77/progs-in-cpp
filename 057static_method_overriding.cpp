#include<iostream>
using namespace std;
class B
{
    protected:
    virtual void show()
    {
        cout<<"Welcome"<<endl;
    }
};
class D : public B
{
    public:
    void show()
    {
        cout<<"Bye";
    }
};
int main()
{
    D t;
    t.show();
}