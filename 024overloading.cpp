#include<iostream>
using namespace std;
class test
{
    public:
    void sum(int x, int y){
        cout<<"Sum = "<<x+y<<endl;
    } 
    void sum(float x, float y){
        cout<<"Sum = "<<x+y;
        cout<<"sum";
    } 
};
int main(){
    test t;
    t.sum(23,12);
    t.sum(10.20f,20.10f);

}