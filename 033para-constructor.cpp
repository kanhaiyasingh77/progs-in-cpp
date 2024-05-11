#include<iostream>
using namespace std;
class test {
    private:
    int x;
    public:
    test(int a) {
        x = a;
    };
    void show() {
        cout<<"value of x = "<<x;
    }
};
int main() {
    test t(34);
    t.show();
}