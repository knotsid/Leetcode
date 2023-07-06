class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int mini=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                mini=min(j-i+1,mini);
                i++;
            }
            j++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};