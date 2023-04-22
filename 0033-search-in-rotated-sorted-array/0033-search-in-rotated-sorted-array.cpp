class Solution {
public:
    int findPivot(vector<int>& arr){
        int start=0, end=arr.size()-1;
        int mid = start + (end-start)/2;
        while(start<end){
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }
    
    int binarySearch(vector<int>& arr, int s, int e, int target){
        int start = s;
        int end =e;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(arr[mid]==target){
                return mid;
            }
            if(target>arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findPivot(nums);
        if(target>=nums[pivot] && target <= nums[n-1]){
            return binarySearch(nums, pivot, n-1, target);
        }
        else{
            return binarySearch(nums, 0, pivot-1, target);
        }
        return -1;
    }
};