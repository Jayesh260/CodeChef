#include <iostream>
using namespace std;
class Complex{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input(){
           cout<<"Enter real part: ";
           cin>>real;
           cout<<"Enter imaginary part: ";
           cin>>imag;
       }
       Complex operator -(Complex c2){
           Complex temp;
           temp.real=real-c2.real;
           temp.imag=imag-c2.imag;
           return temp;
       }
       Complex operator +(Complex c2){
           Complex temp;
           temp.real=real+c2.real;
           temp.imag=imag+c2.imag;
           return temp;
       }
       void output(){
           if(imag<0)
               cout<<""<<real<<imag<<"i"<<endl;
           else
               cout << "" << real << "+" << imag << "i"<<endl;
       }
};
int main(){
    Complex c1, c2,sub,sum;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    cout<<"the sub of two complex numbers are:"<<endl;
    sub=c1-c2;
    sub.output();
    cout<<"the sum of two complex numbers are:"<<endl;
    sum=c1+c2;
    sum.output();
    return 0;
}
