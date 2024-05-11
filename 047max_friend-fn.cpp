#include<iostream>
using namespace std;
class Test2;
class Test1
{
    private:
    int x;
    public:
    Test1(int z)
    {
        x = z;
    }
    void show()
    {
        cout<<"No1 = "<<x<<endl;
    }
    friend void Max(Test1 t1, Test2 t2);
};
class Test2 
{
    private:
    int x;
    public:
    Test2(int z)
    {
        x = z;
    }
    void show()
    {
        cout<<"No2 = "<<x<<endl;
    }
    friend void Max(Test1 t1, Test2 t2);
};
void Max(Test1 t1, Test2 t2)
{
    t1.show();
    t2.show();
    if(t1.x>t2.x)
    cout<<"Bigger = "<<t1.x<<endl;
    else
    cout<<"Bigger = "<<t2.x<<endl;
}
int main()
{
    Test1 a(34);
    Test2 b(12);
    Max(a, b);
}