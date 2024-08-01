class Solution {
public:
    bool isPalindrome(int x) {
        int y=0;
        int n=x;
        if(x<0){
            return false;
        }
        while(x){
            if(y>INT_MAX/10 || y<INT_MIN/10){
                return false;
            }
            y = y*10 + x%10;
            x = x/10;
        }
        if(n!=y){
            return false;
        } 
        return true;
    }
};