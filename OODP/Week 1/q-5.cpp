#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 100; i <= 500; ++i)
    {
        int ctr = 0;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
                ctr = 1;
        }
        if (ctr == 0)
            cout << i << " ";
    }
    return 0;
}