#include <iostream>
using namespace std;
class student{
    public:
    string name={"Unknown"};
    int roll_no=0;
    void getinfo(){
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"enter the Roll No"<<endl;
        cin>>roll_no;
    };
    void gethalfinfo(){
            cout<<"enter the roll no"<<endl;
            cin>>roll_no;
        };
    void showinfo(){
        cout<<"the Name of student is "<<name<<endl;
        cout<<"The Roll No of the student is "<<roll_no<<endl;
    };
};
int main() {
    student s1,s2,s3;
    s1.getinfo();
    s2.gethalfinfo();
    s1.showinfo();
    s2.showinfo();
    s3.showinfo();
    return 0;
}
