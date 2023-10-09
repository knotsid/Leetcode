class Solution {
public:
    int lower_bound(vector<int> nums, int st, int end, int target){
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return st;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0, end = nums.size()-1;
        int leftPos = lower_bound(nums, st, end, target);
        int rightPos = lower_bound(nums, st, end, target+1)-1;

        if(leftPos<nums.size() && nums[leftPos]==target){
            return {leftPos, rightPos};
        }
        return {-1,-1};
    }
};