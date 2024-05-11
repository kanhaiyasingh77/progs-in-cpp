#include<iostream>
using namespace std;
class test {
    private:
    int x;
    public:
    test(int z) {
        x = z;
    }
    void show() {
        cout<<"value of x = "<<x<<endl;
    }
    friend void display(test t);
};
void display(test t) {
    t.show();
    cout<<"data = "<<t.x;
}
int main() {
    test s(45);
    display(s);
}