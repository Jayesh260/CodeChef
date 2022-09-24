#include<iostream>
using namespace std;
class Check{
    public:
    void swap(int x,int y){
        cout<<"\nBefore swapping integer values\nValue 1="<<x<<"\nValue2="<<y;
        int temp;
        temp=x;
        x=y;
        y=temp;
        cout<<"\nAfter swapping integer values\nValue1="<<x<<"\nValue 2="<<y;
    }
void swap(double x,double y){
    cout<<"\nBefore swapping float values\nValue1="<<x<<"\nValue2="<<y;
    double temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\nAfter swapping float values\nValue1="<<x<<"\nValue2="<<y;
    }
};
int main ()
{
    Check ch;
    ch.swap(10,20);
    ch.swap(10.5,20.5);
    return 0;
}
