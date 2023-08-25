class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mpp;
        for(int i=0; i<s.size(); i++){
            if(mpp.contains(s[i])){
                if(mpp[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mpp[s[i]]=t[i];
            }
        }
        unordered_map<char,int>mpp1;
        for(int i=0; i<s.size(); i++){
            if(mpp1.contains(t[i])){
                if(mpp1[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                mpp1[t[i]]=s[i];
            }
        }
        return true;
    }
};