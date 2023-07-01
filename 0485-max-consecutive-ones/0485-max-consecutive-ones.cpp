class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currLen = 0, maxi=0;
        for(int i=0;i<nums.size();i++){

            // resetting streak to 0 when encounter 0
            if(nums[i]==0){
                currLen = 0;
            }
            else{
                currLen++;
                // storing max streak to max everytime currLen updates
                maxi = max(maxi, currLen);
            }
        }
        return maxi;
    }
};