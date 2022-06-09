class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 1;
        
        for(int i = 1; i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[res++]=nums[i];
            }
        }
        return res;
    }
};