#include <iostream>
using namespace std;
class circle{
    public:
    int radius;
    void getinfo(){
        cout<<"enter the radius of circle"<<endl;
        cin>>radius;
    };
    void area(){
        cout<<"the area of the circle is "<<(3.14*(radius*radius))<<endl;
    };
    void volume(){
        cout<<"the volume of the circle is "<<((4/3)*3.14*radius*radius*radius)<<endl;
    };
};
int main() {
    circle c1;
    c1.getinfo();
    c1.area();
    c1.volume();
    return 0;
}
