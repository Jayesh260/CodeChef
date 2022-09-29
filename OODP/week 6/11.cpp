#include <bits/stdc++.h>
using namespace std;
//
class Volume{
    public:
    int side;
    float radius;
    int height;
    void vol(int side){
        int volume = side*side*side;
        cout<<"volume of cube of side "<<side<<" is "<<volume<<endl;
    };
    void vol(float radius){
        auto volume= 3.14*4/3*radius*radius*radius;
        cout<<"volume of sphere of raidus "<<radius<<" is "<<volume<<endl;
    };
    void vol(float radius,int height){
        auto volume= 3.14*radius*radius*height;
        cout<<"volume of cylinder of radius "<<radius<<" and height "<<height<<" is "<<volume<<endl;
    };
    void vol(float basearea,float height){
        cout<<"volume of trapizium of base area "<<basearea<<" and height "<<height<<" is "<<basearea*height<<endl; 
    }
};
int main() {
    Volume cube,cylinder,sphere,trapizium;
    float rad=12,basearea=18.5,height=13.5;
    cube.vol(12);
    sphere.vol(rad);
    cylinder.vol(18.5,10);
    trapizium.vol(basearea,height);
    return 0;
}
