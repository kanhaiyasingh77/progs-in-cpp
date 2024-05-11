#include<iostream>
using namespace std;
int main()
{
    int n,h,u,t,th;
    cout<<"Enter no. upto 4 digits"<<endl;
    cin>>n;
    th=n/1000;
    switch(th)
    {
        case 1:
        cout<<"One thousand ";
        break;
         case 2:
        cout<<"Two thousand ";
        break;
         case 3:
        cout<<"Three thousand ";
        break;
         case 4:
        cout<<"Four thousand ";
        break;
         case 5:
        cout<<"Five thousand ";
        break;
         case 6:
        cout<<"Six thousand ";
        break;
         case 7:
        cout<<"Seven thousand ";
        break;
         case 8:
        cout<<"Eight thousand ";
        break;
         case 9:
        cout<<"Nine thousand ";
        break;
    }
    n=n%1000;
    h=n/100;
    switch(h)
    {
        case 1:
        cout<<"One hundred ";
        break;
         case 2:
        cout<<"Two hundred ";
        break;
         case 3:
        cout<<"Three hundred ";
        break;
         case 4:
        cout<<"Four hundred ";
        break;
         case 5:
        cout<<"Five hundred ";
        break;
         case 6:
        cout<<"Six hundred ";
        break;
         case 7:
        cout<<"Seven hundred ";
        break;
         case 8:
        cout<<"Eight hundred ";
        break;
         case 9:
        cout<<"Nine hundred ";
        break;
    }
    n=n%100;
    if(n<20)
    {
        switch(n)
        {
            case 1:
            cout<<"One ";
            break;
             case 2:
            cout<<"Two ";
            break;
             case 3:
            cout<<"Three ";
            break;
             case 4:
            cout<<"Four ";
            break;
             case 5:
            cout<<"Five ";
            break;
             case 6:
            cout<<"Six ";
            break;
             case 7:
            cout<<"Seven ";
            break;
             case 8:
            cout<<"Eight ";
            break;
            case 9:
            cout<<"Nine ";
            break;
            case 10:
            cout<<"Ten ";
            break;
            case 11:
            cout<<"Eleven ";
            break;
            case 12:
            cout<<"Twelve ";
            break;
            case 13:
            cout<<"Thirteen ";
            break;
            case 14:
            cout<<"Fourteen ";
            break;
            case 15:
            cout<<"Fifteen ";
            break;
            case 16:
            cout<<"Sixteen ";
            break;
            case 17:
            cout<<"Seventeen ";
            break;
            case 18:
            cout<<"Eighteen ";
            break;
            case 19:
            cout<<"Nineteen ";
            break;
        }
    }
    else
        {
            t=n/10;
            switch(t)
            {
                case 2:
                cout<<"Twenty ";
                break;
                 case 3:
                cout<<"Thirty ";
                break;
                 case 4:
                cout<<"Fourty ";
                break;
                 case 5:
                cout<<"Fifty ";
                break;
                 case 6:
                cout<<"Sixty ";
                break;
                 case 7:
                cout<<"Seventy ";
                break;
                 case 8:
                cout<<"Eighty ";
                break;
                 case 9:
                cout<<"Ninety ";
                break;
            }
        
        u=n%10;
        switch(u)
        {
            case 1:
            cout<<"One ";
            break;
            case 2:
            cout<<"Two ";
            break;
             case 3:
            cout<<"Three ";
            break;
             case 4:
            cout<<"Four ";
            break;
             case 5:
            cout<<"Five ";
            break;
             case 6:
            cout<<"Six ";
            break;
             case 7:
            cout<<"Seven ";
            break;
             case 8:
            cout<<"Eight ";
            break;
            case 9:
            cout<<"Nine ";
        }
    }
}