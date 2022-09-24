#include <iostream>
using namespace std;
class area{
    public:
    int side,length,breadth,areasq,arearect;
    int area(int side){
        areasq=side*side;
        cout<<"the area of the square of side a is "<<areasq<<endl;
        return areasq;
    };
    int area(int length, int breadth){
        arearect=length*breadth;
        cout<<"the area of the rectangle is"<<arearect<<endl;
        return arearect;
    };
};
int main() {
    int a,b,l;
    cout<<"enter the side of the rectangle"<<endl;
    cin>> a;
    area a1;
    a1.area(a);
    cout<<"enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;
    a1.area(l,b);
    return 0;
}
