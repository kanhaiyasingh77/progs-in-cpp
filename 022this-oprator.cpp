#include<iostream>
using namespace std;
class test
{
    private:
    int x = 8;
    public:
    void input(int x);
    void show();
};
void test :: input(int x)
{
    this-> x= x;
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