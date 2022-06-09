class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        int maxEnding = arr[0];
        int res = arr[0];
        for(int i = 1; i<arr.size(); i++){
            maxEnding = max(arr[i], maxEnding+arr[i]);
            res = max(maxEnding, res);
        }
        return res;
    }
};