#include<iostream>
using namespace std;
class sum {
    public:
    sum(int x, int y=0) {
        cout<<"sum = "<<x+y<<endl;
    }
    sum(float x, int y) {
        cout<<"sum = "<<x+y<<endl;
    }
    sum(float x, float y) {
        cout<<"sum = "<<x+y<<endl;
    }
};
int main() {
    sum a(45);
    sum b(23, 34);
    sum c(23.43f, 34);
    sum d(23.43f, 34.41f);

}