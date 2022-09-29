#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//creating the class named string 
class String{
    //declaring the member data types
        char str[200];
        public:
        //creating the member functions 
          void getdata(){
             cin>>str;
        }
        //using bitwise operator overlaoding for the string 
        int operator ==(String s){
            if(!strcmp(str,s.str))
                return 1;
            return 0;
        }
};
int main(){
    //declaring the member objects
    String s1,s2;
    cout<<"Enter first string :: ";
    s1.getdata();
    cout<<"\nEnter second string :: ";
    s2.getdata();
    //using the op[erator overloading that we declared in the class string 
    if(s1==s2){
        cout<<"\nStrigs are Equal\n";
    }else{
        cout<<"\nStrings are Not Equal\n";
    }
    return 0;
}
