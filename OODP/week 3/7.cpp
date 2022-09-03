#include <iostream>
using namespace std;
class Average{
    public:
    static float calcAverate(float a, float b, float c){
        cout<<"the average is "<<(a + b + c) / 3;
        return 0;
    }
};
int main(){
    cout<<"Enter three numbers: ";
    float a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;Average::calcAverate(a,b,c);
    return 0;
}
