class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;
        int ans = INT_MAX;
        while(st<=end){
            int mid = st + (end - st)/2;

            //checking if left half is sorted or not
            if(nums[st]<=nums[mid]){
                //if sorted that means min ele is leftmost 
                ans = min(ans, nums[st]);
                // elim sorted left half
                st=mid+1;
            }
            //here means left half is not sorted means right half is sorted
            else{
                // min ele if sorted right half is mid
                ans = min(ans, nums[mid]);
                // elim sorted right half
                end = mid-1;
            }
        }
        return ans;
    }
};