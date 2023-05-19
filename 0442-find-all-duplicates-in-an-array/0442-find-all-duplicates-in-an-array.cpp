class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int arr[100000] = {0};
        vector<int> ans;

        for(int i=0; i<nums.size(); i++ ){
            arr[nums[i]]++;
            if(arr[nums[i]] > 1) ans.push_back(nums[i]);
        }
        return ans;
    }
};