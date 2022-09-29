#include <bits/stdc++.h>
using namespace std;
class Area{
    public:
    int side;
    int base , height;
    int radius;
    int l,b;
    void a(int l,int b){
        cout<<"rectangle area: "<<l*b<<endl;
    };
    void a(int radius){
        cout<<"circle area: "<<3.14*radius*radius<<endl;
    }
    void square(int side){
        cout<<"Square area: "<< side*side<<endl;
    }
    void trianlge(int base , int height){
        cout<<"Triangle area: "<<0.5*base*height<<endl;
    };
    void rohombus(int diag1,int diag2){
        cout<<"rohombus area:"<<(diag1*diag2)/2<<endl;
    }
};
int main() {
    Area a1;
    a1.a(13);
    a1.a(10,12);
    a1.square(16);
    a1.trianlge(18,22);
    a1.rohombus(12,13);
    return 0;
}
