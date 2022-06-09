class Solution {
public:
    int getValue(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int result = 0;
        for(int i = 0;i<s.size();){
            if(i==s.size()-1){
                result+=getValue(s[i]);
                return result;
            }
            int current = getValue(s[i]);
            int next = getValue(s[i+1]);
            if(current<next){
                result+=next-current;
                i=i+2;
            } else{
                result+=current;
                i++;
            }
        }
        return result;
    }
    
};