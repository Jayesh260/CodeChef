#include <iostream>
using namespace std;
class addamount{
    public:
    int mny=50;
    void amount(){
        mny=mny+0;
        cout<<"the amount is "<<mny<<endl;
    };
    int amount(int addition){
        mny=mny+addition;
        cout<<"the new amount is "<<mny<<endl;
        return mny;
    };
};
int main() {
    addamount a1,a2;
    int addition;
    cout<<"enter the amount to be added"<<endl;
    cin>>addition;
    a1.amount(addition);
    a2.amount();
    return 0;
}
