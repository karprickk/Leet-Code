class Solution {
public:
    bool isPalindrome(int x) {
        int y=0;
        int n=x;
        while(x){
            if(y>INT_MAX/10 || y<INT_MIN/10){
                return false;
            }
            y = y*10 + x%10;
            x = x/10;
        }
        if(n==y&&n>=0){
            return true;
        } 
        return false;
    }
};