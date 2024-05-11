#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input(int n);
    void show();
};
void test :: input(int n)
{
    x= n;
}
void test :: show(){
    cout<<"value = "<<x;
}
int main(){
    test t;
    t.input(45);
    t.show();

    return 0;
}