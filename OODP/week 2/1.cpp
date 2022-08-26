#include <iostream>
using namespace std;
int main()
{
    char ch;
    int a, b, Solution;
    cout << "Enter an Operator (+, *, *, /): ";
    cin >> ch;
    cout << "Enter two operands: " << endl;
    cin >> a >> b;
    switch (ch)
    {
    case '+':
        Solution = a + b;
        break;
    case '-':
        Solution = a - b;
        break;
    case '*':
        Solution = a * b;
        break;
    case '/':
        Solution = a / b;
        break;
    }
    cout << "Solution is " << Solution << endl;
    return 0;
}
