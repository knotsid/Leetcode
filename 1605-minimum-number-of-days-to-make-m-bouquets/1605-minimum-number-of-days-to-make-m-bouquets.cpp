class Solution {
public:
    bool possible(vector<int>arr,int day,int m,int k){
        int cnt=0;
        int noOfB=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                noOfB+=(cnt/k);
                cnt=0;
            }
        }
        noOfB+=(cnt/k);
        return noOfB>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        long long val= m*1LL*k*1LL;
        if(val>arr.size()) return -1;

        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
        }

        int st=mini, end=maxi;
        while(st<=end){
            int mid = st+ (end-st)/2;
            if(possible(arr,mid,m,k)){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;
    }
};