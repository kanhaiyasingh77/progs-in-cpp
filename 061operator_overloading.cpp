#include<iostream>
using namespace std;
class Test
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"enter the data :- "<<endl;
        cin>>x;
    }
    void putdata()
    {
        cout<<"Data = "<<x<<endl;
    }
    void operator-()
    {
        x = -x;
    } 
};
int main()
{
    Test t;
    t.getdata();
    t.putdata();
    -t;
    t.putdata();
}