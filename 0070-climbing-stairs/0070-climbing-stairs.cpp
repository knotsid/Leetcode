class Solution {
public:
    int climber(vector<int> &dp,int n){
        if(n<0) return 0;
        if(n==0 || n==1)    return 1;
        if(dp[n]!=-1)   return dp[n];
        return dp[n]=climber(dp,n-1)+climber(dp,n-2);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climber(dp,n);
    }
};