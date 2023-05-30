class Solution {
private:
    void solve(vector<int> nums, vector<int> tempAns, int index, vector<vector<int>>& res){
        //base case
        if(index >= nums.size()){
            res.push_back(tempAns);
            return ;
        }
        //exclude
        solve(nums, tempAns, index+1, res);

        //include
        int ele = nums[index];
        tempAns.push_back(ele);
        solve(nums, tempAns, index+1, res);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tempAns;
        int index = 0;
        solve(nums, tempAns, index, res);
        return res;

    }
};