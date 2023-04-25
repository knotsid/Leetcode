class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        //for the last non zero position
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                //ignoring zero and findin non zero to swap with i
                swap(nums[i++],nums[j]);
            }
        }
        
    }
};