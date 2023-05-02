class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for(int i=1;i<n;i++){
//             observation from test cases : previous element is always smaller compares to next element
//             also considering array as a cyclic array
            if(nums[i-1]>nums[i])
//                 if observation breaks, increment counter
                count++;
        }
//         the cyclic case
        if(nums[n-1]>nums[0])
            count++;
//         according to observation return false if condition breaks more than 2 times 
        return count<=1;
    }
};