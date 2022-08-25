#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout << "enter the year" << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}