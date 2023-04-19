class Solution {
public:

    int first_index(vector<int>& nums, int target) {
    int start=0, end = nums.size() -1, ans=-1;
    int mid= (start+end)/2;
    while(start<=end){
        if(nums[mid] == target){
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        mid= (start+end)/2;
    }
    return ans;
}

    int last_index(vector<int>& nums, int target) {
    int start=0, end = nums.size() -1, mid, ans=-1;
    mid= (start+end)/2;
    while(start<=end){
        if(nums[mid] == target){
            ans=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        mid= (start+end)/2;
    }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(first_index(nums, target));
        v.push_back(last_index(nums, target));
        return v;
    }
};