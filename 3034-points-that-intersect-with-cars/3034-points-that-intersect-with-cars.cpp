class Solution {
public:
    // int numberOfPoints(vector<vector<int>>& nums) {
    //     sort(nums.begin(),nums.end());
        
    //     vector<vector<int>>res;
        
    //     int start = nums[0][0];
    //     int end = nums[0][1];
        
    //     for(int i=1;i<nums.size();i++){
    //         if(nums[i][0]>end){
    //             res.push_back({start,end});
    //             start = nums[i][0];
    //             end = nums[i][1];
    //         }
    //         else{
    //             end = max(end, nums[i][1]);
    //         }
    //     }
    //     res.push_back({start,end});
    //     int count =0;
    //     for(int i=0;i<res.size();i++){
    //         count+=(res[i][1]-res[i][0]+1);
    //     }
    //     return count;
    // }

    int numberOfPoints(vector<vector<int>>& nums) {
        set<int>sett;
        for(auto ele : nums){
            int start = ele[0];
            int end = ele[1];
            for(int i=start;i<=end;i++){
                sett.insert(i);
            }
        }
        return sett.size();
    }
};