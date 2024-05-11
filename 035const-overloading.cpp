#include<iostream>
using namespace std;
class sum {
    public:
    sum(int x, int y) {
        cout<<"sum = "<<x+y<<endl;
    }
    sum(float x, float y) {
        cout<<"sum = "<<x+y<<endl;
    }
};
int main() {
    sum a(34, 45);
    sum b(56.67f, 12.66);
}