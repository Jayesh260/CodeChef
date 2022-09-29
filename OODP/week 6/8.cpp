#include <bits/stdc++.h>
using namespace std;
//declaring the class of area
class Area{
    public:
    //declaring the class data types
    int side;
    int base , height;
    int radius;
    int l,b;
    //creating the diff function using the same name but diff data entrys
    void a(int l,int b){
        cout<<"rectangle: "<<l*b<<endl;
    };
    //creating the diff function using the same name but diff data entrys
    void a(int radius){
        cout<<"circle: "<<3.14*radius*radius<<endl;
    }
    //creating diff function for the area of square
    void square(int side){
        cout<<"Square: "<< side*side<<endl;
    }
    //creating diff function for the area of triangle
    void trianlge(int base , int height){
        cout<<"Triangle: "<<0.5*base*height<<endl;
    };
};
int main() {
    //making the member function of the class 
    Area a1;
    //using function overloading for the object name a1
    a1.a(13);
    a1.a(10,12);
    a1.square(16);
    a1.trianlge(18,22);
    return 0;
}
