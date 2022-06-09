class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int original = x, rev = 0;
        while(x>0){
            int rem = x%10;
            x/=10;
            rev = rev * 10 + rem;
        }
        return rev == original;
    }
};