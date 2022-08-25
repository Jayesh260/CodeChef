#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    num > 0 ? cout << "The Number is positive." : cout << "the number is negative" << endl;
    return 0;
}