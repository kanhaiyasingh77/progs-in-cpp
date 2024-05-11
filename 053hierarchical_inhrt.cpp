#include<iostream>
using namespace std;
class Rectangle
{
    protected:
    double length, breadth;
    public:
    void input()
    {
        cout<<"enter the value for length and breadth"<<endl;
        cin>>length>>breadth;
    }
};
class Area : public Rectangle
{
    public:
    void area()
    {
        cout<<"Area of Rectangle = "<<length*breadth<<endl;
    }
};
class Perimeter: public Rectangle
{
    public:
    void peri()
    {
        cout<<"Perimeter of Rectangle = "<<2*(length+breadth)<<endl;
    }
};
int main()
{
    Area ar;
    Perimeter pr;
    
    ar.input();
    ar.area();

    pr.input();
    pr.peri();

}
