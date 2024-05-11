#include<iostream>
using namespace std;
using namespace ab;
using namespace ac;

namespace ab {
    int show(){
        int b = 67;
        cout<<b<<endl;
        return 0;
    }
};
namespace ac {
    int show(){
        int a = 45;
        cout<<a<<endl;
        return 0;
    }
};
int main() {
    //using namespace B;
    //show() B;
    // using resolution operator
    int x = ab::show();
    int y = ac::show();
    return 0;
}