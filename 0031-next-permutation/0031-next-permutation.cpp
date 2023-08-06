class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }
        for(int i=n-1;i>pivot && pivot != -1;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
