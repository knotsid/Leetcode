class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //_____________HASHMAP_____________
        // unordered_map<int,int> mpp;
        // for(auto i : nums){
        //     mpp[i]++;
        // }
        // for(auto i:mpp){
        //     if(i.second>1){
        //         return true;
        //     }
        // }
        // return false;

        //_____________SORT_____________
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};