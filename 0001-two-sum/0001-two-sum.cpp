class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(target-arr[i])==mpp.end()){
                mpp[arr[i]]=i;
            }
            else{
                return {mpp[target-arr[i]], i};
            }
        }
        return {-1,-1};
    }
};