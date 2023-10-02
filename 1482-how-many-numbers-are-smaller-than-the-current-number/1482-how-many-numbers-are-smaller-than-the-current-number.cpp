class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int i, j;
        int count[101] = {0};

        // simple hashing 
        for(i = 0; i < nums.size(); i++)
            count[nums[i]]++;

        // Incrementing and reassigning values based on previous counts element
        // ex. if there are 4 small values than 9th element. You want to add count to the 10th, 
        // and continue adding till the 100th element because constrait is 0 <= nums[i] <= 100
        for(i = 1; i < 101; i++) 
            count[i] += count[i - 1];

        // Simply pushing back the value computed above
        for(i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                res.push_back(0);
            else
                res.push_back(count[nums[i] - 1]);
        }
        return res;
    }
};