class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0,res=0;
        
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]==0) nums[i]=1;
        // }
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                sum = 0;
                continue;
            }
            sum+=nums[i];
            res = max(res,sum);
        }
        return res;
    }
};