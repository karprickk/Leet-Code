class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1 , mid =0, i;
        while(left<=right){
            mid = (right+left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        int n=nums.size()-1;
        for(i=0;i<=n;i++){
            if(nums[i]<target){
                continue;
            }
            else if(nums[i]>target){
                return i;
            }
        }
        if(nums[n]<target){
            return n+1;
        }
        return 0;
    }
};