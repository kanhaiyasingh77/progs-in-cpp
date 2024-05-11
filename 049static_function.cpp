#include<iostream>
using namespace std;
class Test
{
    private:
    int num;
    static int rec;
    public:
    void input()
    {
        cout<<"enter the number: "<<endl;
        cin>>num;
        rec++;
    }
    void putdata()
    {
        cout<<"Number = "<<num<<endl;
    }
    static void show_rec()
    {
        cout<<"Occurence of input = "<<rec<<endl;
    }
};
int Test::rec;//for visibility of static data outside of class
int main()
{
    Test a, b, c;
    a.input();
    a.putdata();
    b.input();
    c.input();
    b.putdata();
    c.putdata();
    Test::show_rec();
}