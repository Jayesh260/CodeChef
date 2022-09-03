#include<iostream>
using namespace std;
class Car {
  public:
    string brand;  
    string model;
    int year;
    void getinfo(){
        cout<<"enter the car brand"<<endl;
        cin>>brand;
        cout<<"enter the car model"<<endl;
        cin>>model;
        cout<<"enter the car year"<<endl;
        cin>>year;
    };
    void showinfo(){
        cout<<brand<<endl;
        cout<<model<<endl;
        cout<<year<<endl;
    }
};
int main() {
  Car carObject1,carObject2;
  carObject1.getinfo();
  carObject2.getinfo();
  cout<<"the entered data is :"<<endl;
  carObject1.showinfo();
  carObject2.showinfo();
  return 0;
}
