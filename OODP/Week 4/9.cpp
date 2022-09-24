#include <iostream>
using namespace std;
class Bill{
    public:
    Bill(int,int,int,int);
    ~Bill(){
        cout<<"\nDestructor Executed";
        }
    };
    Bill::Bill(int medicines,int days,int room,int days_room){
    int bill_1=medicines*days;
    int bill_2=room*days_room;
    cout<<bill_1<<"\n"<<bill_2;
    }
int main(){
    int medicines ,days,room,days_room;
    cin>>medicines>>days;
    cin>>room>>days_room;
    Bill b(medicines,days,room,days_room);
    }