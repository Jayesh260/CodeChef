#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 1; i <= 50; i++)
    {
        if (i == num)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}