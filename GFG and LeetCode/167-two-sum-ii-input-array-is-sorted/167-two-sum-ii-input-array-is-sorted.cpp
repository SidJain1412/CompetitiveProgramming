class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vec;
        int l = 0, h = numbers.size()-1;
        int sum;
        while(l<h){
            sum = numbers[l]+numbers[h];
            if(sum == target) return {l+1,h+1};
            else if(sum>target) h--;
            else l++;
        }
        return vec;
    }
};