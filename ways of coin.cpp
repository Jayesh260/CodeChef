// } Driver Code Ends
class Solution {
public:
    void findCombinations(vector<int>& arr, int r, int start, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == r) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < arr.size(); ++i) {
            if (i > start && arr[i] == arr[i - 1]) continue;

            current.push_back(arr[i]);
            findCombinations(arr, r, i + 1, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> findWays(int N, int r, vector<int> &arr) {
        vector<vector<int>> result;
        vector<int> current;
        sort(arr.begin(), arr.end());

        findCombinations(arr, r, 0, current, result);

        sort(result.begin(), result.end());
        return result;
    }
};
