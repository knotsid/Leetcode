class Solution {
public:
    int maxPower(string s) {
        int maxi=INT_MIN;
        int occ=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == s[i+1])
                occ++;
            
            else{
                occ=0;
            }
            maxi=max(maxi,occ+1);
        }
        return maxi==INT_MIN?s.size():maxi;
    }
};