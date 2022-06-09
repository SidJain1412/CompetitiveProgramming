class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<pair<int,int>> arr;
        
        for(int i = 0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        
        sort(arr.begin(),arr.end());
        
        int l = 0, h = arr.size()-1;
        int sum;
        while(l<h){
            sum = arr[l].first + arr[h].first;
            if(sum == target) return {arr[l].second,arr[h].second};
            else if(sum>target) h--;
            else l++;
        }
        
        return {0};
    }
};