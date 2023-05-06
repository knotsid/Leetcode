class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> res (n+1, true);
        
        res[0] = res[1] =false;
        
        for(int i=2;i<n;i++){
            if(res[i]){
                
                count++;
                for(int check =2*i; check<n;check+=i){
                    res[check]=false;
                }
            }
        }
        return count;
    }
};