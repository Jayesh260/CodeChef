#include <iostream>
using namespace std;
unsigned int fact(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int num;
    cout<<"Enter the number whose factorial is to be found"<<endl;
    cin>>num;
    cout << "Factorial of is "<<fact(num)<<endl;
    return 0;
}