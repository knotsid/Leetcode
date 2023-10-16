class Solution {
public:
    vector<int> findIndices(vector<int>& arr, int indexDifference, int valueDifference) {
        vector<int> ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((abs(i-j)>=indexDifference) && (abs(arr[i]-arr[j])>=valueDifference)){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};