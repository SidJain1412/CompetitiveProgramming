class Solution {
public:
    
    bool isPalindrome(string str){
        
        int l = 0, r =str.size()-1;
        
        while(l<r){
            if(str[l]!=str[r]) return false;
            l++;
            r--;
        }
        
        return true;
}
    int removePalindromeSub(string s) {
        if(s.empty()) return 0;
        if(isPalindrome(s)) return 1;
        return 2;
    }
};