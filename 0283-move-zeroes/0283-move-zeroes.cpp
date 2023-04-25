class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        //for the last non zero position
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                //ignoring zero and findin non zero copy at i
                nums[i++] = nums[j];
            }
        }
        //since i is pointing at last non zero in nums
        //and we have copied (not swapped) the non zero at consecutive place
        //now we can fill the next indices from i with 0
        for(int j=i;j<nums.size();j++){
            nums[j]=0;
        }
        
    }
};