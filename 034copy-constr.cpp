#include<iostream>
using namespace std;
class test {
    private:
    int x;
    public:
    test(int a) {
        x = a;
    }
    test(test &n) {
        x = n.x;
    }
    void show() {
        cout<<"value of x = "<<x<<endl;
    }
};
int main() {
    test t(32);
    t.show();
    test p(t);
    p.show();
}