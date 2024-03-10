

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // sort(apple.begin(),apple.end(),greater<int>());
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0,box=0;
        for(int a:apple)
            sum+=a;
        
        // cout<<sum<<endl;
        for(auto x:capacity){
            // cout<<x<<" ";
            if(sum>0){
                sum-=x;
                box++;
            }
}
        // cout<<box;
        return box;
    }
};
