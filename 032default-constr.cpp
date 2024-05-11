#include<iostream>
using namespace std;
class test 
{
    private:
    int x;
    public:
    test() {
        x = 45;
    }
    void show() {
        cout<<"value of x = "<<x;
    }
};
int main() {
    test t;
    t.show();
}