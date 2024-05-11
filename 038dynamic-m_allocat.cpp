#include<iostream>
using namespace std;
class test {
    private:
    int *p;
    public:
    test()
    {
        p = new int;
    }
    void input() {
        cout<<"enter the value = "<<endl;
        cin>>*p;
    }
    void  show() {
        cout<<"your value = "<<*p<<endl;
    }
    ~test() {
        delete p;
        cout<<"Bye";
    }
};
int main() {
    test t;
    t.input();
    t.show();
}