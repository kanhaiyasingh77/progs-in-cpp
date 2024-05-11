#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input();
    void show();
};
void test :: input()
{
    cout<<"Enter the data"<<endl;
    cin>>x;
}
void test :: show(){
    cout<<"value = "<<x;
}
int main(){
    test t;
    t.input();
    t.show();

    return 0;
}