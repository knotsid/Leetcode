class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //vector to store number of occurrence of ele in nums
        vector<int> count(nums.size(),0);
        //storing occurrances of ele of nums in count
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            //if any element occurs more than once its index is returned 
            //bcoz index represent number itself
            if(count[i]>1){
                return i;
            }
        }
        return {};
    }
};