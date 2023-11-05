class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        std::ios::sync_with_stdio(false);
        int curr=arr[0];
        int wins = 0;
        int n = arr.size();

        for(int i=1;i<n;i++){
            if(arr[i]>curr){
                curr=arr[i];
                wins=0;
            }
            wins++;
            if(wins>=k) break;
        }
        return curr;
    }
};