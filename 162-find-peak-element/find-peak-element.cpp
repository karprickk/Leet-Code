class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(), ans=0 ;
        for(int i=0;i<n;i++){
            if((i==0||nums[i]>nums[i-1]) && (i==n-1||nums[i]>nums[i+1])){
                ans = i;
            }
        }
        return ans;
    }
};