class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //sort the vector
        sort(nums.begin(), nums.end());
        //traversing the vector
        for(int i = 0; i < nums.size() - 1; i++){
            //if i+1th element is equal to ith element then return
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        //return null because function needed a return int
        return {};
    }
};