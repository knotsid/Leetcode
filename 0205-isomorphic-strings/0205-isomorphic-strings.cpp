class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mpp1;
        for(int i=0;i<s.size();i++){
            if(mpp1.contains(s[i])){
                if(mpp1[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mpp1[s[i]]=t[i];
            }
        }
        unordered_map<char,int>mpp2;
        for(int i=0;i<s.size();i++){
            if(mpp2.contains(t[i])){
                if(mpp2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                mpp2[t[i]]=s[i];
            }
        }
        return true;
    }
};