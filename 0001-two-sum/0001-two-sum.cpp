class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;  //storing ele ->index

        for(int i=0;i<nums.size();i++){
            // pair not available in map, so add curr to map
            if(mpp.find(target - nums[i])==mpp.end()){
                mpp[nums[i]]=i;
            }
            else{
                // pair available in map
                return {mpp[target-nums[i]],i};
            }
        }
        return {-1,-1};
    }
};