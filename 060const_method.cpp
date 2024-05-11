#include<iostream>
using namespace std;
class A
{
    public:
    void display()const
    {
        cout<<"Hello bro.."<<endl;
    }
    void show()
    {
        cout<<"Welcome....";
    }
};
int main()
{
    const A t;
    t.display();
    A p;
    p.show();
}
