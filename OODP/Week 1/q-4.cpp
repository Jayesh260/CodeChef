#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter Postive numbers to sum:";
    while (1)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        sum = sum + num;
    }
    cout << sum;
    return 0;
}