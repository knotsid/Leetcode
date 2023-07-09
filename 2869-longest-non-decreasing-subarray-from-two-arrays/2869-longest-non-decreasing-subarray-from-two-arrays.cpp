class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int ans = 0, prev1=1, prev2=1;
        
        if(n==1) return 1;
        
        for(int i=1;i<n;i++){
            int current1=1, current2=1;
            
            if(nums1[i] >= nums1[i-1])
                current1=max(current1, prev1+1);
            if(nums2[i] >= nums2[i-1])
                current2=max(current2, prev2+1);
            if(nums1[i] >= nums2[i-1])
                current1=max(current1, prev2+1);
            if(nums2[i] >= nums1[i-1])
                current2=max(current2, prev1+1);
            
            ans = max(ans, max(current1, current2));
            prev1=current1;
            prev2=current2;
        }
        return ans;
    }
};