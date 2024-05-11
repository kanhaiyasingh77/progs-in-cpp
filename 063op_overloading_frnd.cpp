#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value ";
        cin>>x;
    }
    void putdata()
    {
        cout<<"data = "<<x<<endl;
    }
    friend void operator-(test &z);
};
void operator-(test &z)
{
    z.x = -z.x;
}
int main()
{
    test a;
    a.getdata();
    -a;
    a.putdata();
}