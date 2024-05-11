#include<iostream>
using  namespace std;
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
    void show1()
    {
        cout<<"value of Test1 = "<<x<<endl;
    }
    friend class Test2;
};
class Test2
{
    private:
    int y;
    public:
    Test2(int z)
    {
        y = z;
    }
    void show2()
    {
        cout<<"value of Test2 = "<<y<<endl;
    }
    void Max(Test1 &t1)
    {
        t1.show1();
        if(t1.x>y)
        cout<<"bigger value = "<<t1.x<<endl;
        else
        cout<<"bigger value = "<<y;

    }
};
int main()
{
    Test1 a(34);
    Test2 b(45);
    b.show2();
    b.Max(a);
}