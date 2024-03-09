#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

const int N = 1e5+10;

bool st[N];
vector<int> prime;
void init()
{
    for(int i = 2; i <= N ; ++i)
    {
        if(!st[i])prime.push_back(i);
        for(int j = 0; prime[j] <= N/i ; ++j)
        {
            st[prime[j]* i] = true;
            if(i % prime[j] == 0)break;
        }
    }
}

void solve()
{
    int n;cin >> n;
    cout << (n <= 2?"1":"2") <<endl;
    for(int i = 2; i <= n + 1; ++i)
    {
        if(!st[i])cout << "1 ";
        else cout << "2 ";
    }
    cout << endl;
}
int main()
{
    init();
    solve();
    return 0;
}
