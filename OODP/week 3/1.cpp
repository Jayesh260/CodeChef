#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no=1;
    void showinfo(){
        cout<<"the name of the person is "<<name<<endl;
        cout<<"the roll no of the person is "<<roll_no<<endl;
    }
};
int main(){
    student student1;
    student1.name="john";
    student1.roll_no=2;
    student1.showinfo();
    return 0;
}
