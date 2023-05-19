class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return{};
        map<int, int> mpp;
        vector<int> res;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            mpp[nums[i]]++;
        }
        for(auto itr : mpp){
            if(itr.second > 1){
                res.push_back(itr.first);
            }
        }
        return res;
    }
};