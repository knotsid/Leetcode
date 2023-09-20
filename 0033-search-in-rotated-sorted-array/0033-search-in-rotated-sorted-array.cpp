class Solution {
public:
    int find_pivot(vector<int>nums){
        int n=nums.size();
        int st=0, end = n-1;
        while(st<end){
            int mid = st+(end-st)/2;
            if(nums[0]<=nums[mid]){
                st=mid+1;
            }
            else{
                end = mid;
            }
        }
        return st;
    }
    int binary_search(vector<int>nums, int st, int end, int target){
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                st=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = find_pivot(nums);
        if(target>=nums[pivot]&&target<=nums[nums.size()-1]){
            return binary_search(nums, pivot, nums.size()-1, target);
        }
        else{
            return binary_search(nums, 0, pivot, target);
        }
        return -1;
    }
};
