/* Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 

Constraints:

1 <= nums.length <= 3 * 10^4
0 <= nums[i][j] <= 10^5




*/


#include <vector>
#include <iostream>
#include <cassert>
 
bool canJump(const std::vector<int> &nums) {
    auto lastPos = nums.size() - 1;
    for (auto i = nums.size() - 1; i >= 0; i--) {
        if (i + nums[i] >= lastPos) {
            lastPos = i;
        }
    }
    return lastPos == 0;
}


static void test(){
  // Test 1
  std::vector<int> num1={4,3,1,0,5};
  assert(canJump(num1)==true);
  std::cout<<"Input: ";
  for(auto i: num1){
    std::cout<<i<<" ";
  }
  std::cout<<"Output: true"<<std::endl;
  // Test 2
  std::vector<int> num2={3,2,1,0,4};
  assert(canJump(num2)==false);
  std::cout<<"Input: ";
  for(auto i: num2){
    std::cout<<i<<" ";
  }
  std::cout<<"Output: false"<<std::endl;
}


/**
 * @brief Main function
 * @returns 0 on exit
 */
int main(){
    test();
    return 0;
}