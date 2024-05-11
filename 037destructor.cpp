#include<iostream>
using namespace std;
class test {
    private:
    int x;
    public:
    test(int y) {
        x = y;
    }
    void show() {
        cout<<"value of x = "<<x<<endl;
    }
    ~test() {
        cout<<"Bye";
    }
};
int main() {
    test t(34);
    t.show();
}