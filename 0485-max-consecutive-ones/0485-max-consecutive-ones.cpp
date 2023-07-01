class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currLen = 0, maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                currLen = 0;
            }
            else{
                currLen++;
                maxi = max(maxi, currLen);
            }
        }
        return maxi;
    }
};