#include <iostream>
using namespace std;
void check(int num)
{
    if (num%2==0)
        goto even; 
    else
        goto odd; 
even:
    cout << num << " is even";
    return; 
odd:
    cout << num << " is odd";
}
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    check(num);
    return 0;
}