#include <iostream>
using namespace std;
#include <unordered_set>
bool canMakeZero(int N, std::unordered_set<int>& memo) {
    if (N == 0) {
        return true;
    }
    if (memo.find(N) != memo.end()) {
        return false;
    }
    bool result = false;
    if (N >= 3) {
        result = result || canMakeZero(N - 3, memo);
    }
    if (N >= 4) {
        result = result || canMakeZero(N - 4, memo);
    }
    memo.insert(N);
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        unordered_set<int> memo;
        if (canMakeZero(N, memo)) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    }
    return 0;
}
