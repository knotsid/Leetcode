class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st=0, end =n-1;

        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid]==target) return mid;

            //left sorted half
            if(nums[st]<=nums[mid]){
                if(target <= nums[mid] && target >= nums[st]) end = mid-1;
                else st = mid+1;
            }

            //right sorted half
            else{
                if(target >= nums[mid] && target <=nums[end]) st=mid+1;
                else end = mid-1;
            }
        }
        return -1;
    }
};