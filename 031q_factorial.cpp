#include<iostream>
using namespace std;

class Test
{
    private:
    int n, fact;
    public:
    Test(int num)
    {
    n= num;
    fact=1;
    }
    void facto()
    {
        int i;
        for(i=1;i<=n;i++){
            fact = fact*i;
        }
    }
    void show()
    {
        cout<<"factorial of "<<n<<" is "<<fact;
    }
};
int main()
{
    Test t(4);
    t.facto();
    t.show();
}