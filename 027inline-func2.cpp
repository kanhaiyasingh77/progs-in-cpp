#include<iostream>
using namespace std;

class test
{
    private:
    int x, y;
    public:
    //inline is optional
    void input(){
        cout<<"Enter two nos"<<endl;
        cin>>x>>y;
    }
    void show(){
        cout<<"numbers are =\n"<<x<<"\n"<<y;
    }
};
int main(){
    test t;
    t.input();
    t.show();

}