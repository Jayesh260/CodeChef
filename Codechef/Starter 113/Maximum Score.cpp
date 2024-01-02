#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
int maxScore(std::vector<int>& A) {
    sort(A.begin(), A.end());
    int n = A.size();
    int score = 0;
    for (int i = 0; i < n / 2; ++i) {
        int diff = A[i] - A[n - 1 - i];
        score += diff;
    }
    return score;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    std::cin >> n;
    std::vector<int> A;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        A.push_back(num);
    }
    int result=abs(maxScore(A));
    cout<<result<<endl;
}
    return 0;
}
