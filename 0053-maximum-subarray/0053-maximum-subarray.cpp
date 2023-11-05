class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0, maxTillNow = INT_MIN;

        for(int i=0;i<nums.size();i++){
            // works when sum is negative and curr ele is positive
            // we start the summation with curr ele
            // or when sum is +ve and sum+ele is also +ve
            currMax = max(nums[i], currMax + nums[i]);

            // keeping the all time maxx
            maxTillNow = max(maxTillNow, currMax);
        }
        return maxTillNow;
    }
};