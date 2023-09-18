class Solution {
public:
    int first_occ(vector<int>nums, int target){
        int n=nums.size();
        int st=0, end=n-1;
        int res=-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target){
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end =mid-1;
            }
        }
        return res;
    }
    int last_occ(vector<int>nums, int target){
        int n=nums.size();
        int st=0, end=n-1;
        int res=-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target){
                res=mid;
                st=mid+1;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end =mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(first_occ(nums, target));
        v.push_back(last_occ(nums, target));
        return v;
    }
};