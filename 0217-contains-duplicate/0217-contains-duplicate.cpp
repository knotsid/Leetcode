class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //set approach
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};