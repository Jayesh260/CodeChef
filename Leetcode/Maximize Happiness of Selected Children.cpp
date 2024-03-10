#include<bits/stdc++.h>
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int sum=0;
        int count=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        int n=happiness.size();
        for(int i=0;i<k;i++){
            long long int maxi=max(0,(happiness[i]-count));
            count++;
            sum+=maxi;
            }
        return sum;
    }
};
