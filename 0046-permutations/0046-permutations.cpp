class Solution {
public:

    void solve(vector<int> nums, vector<vector<int>>& res, int index){
        if(index >= nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=index ; i<nums.size(); i++){
            swap(nums[index],nums[i]);
            solve(nums, res, index+1);
            //backtrack
            swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int index =0;
        solve(nums, res, index);
        return res;

    }
};