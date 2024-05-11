#include<iostream>
using namespace std;
class test {
    private:
    int x;
    public:
    void input() {
        cout<<"Enter the number "<<endl;
        cin>>x;
    }
    void show() {
        cout<<"value = "<<x;
    }
};
int main() {
    test t;
    t.input();
    t.show();
}