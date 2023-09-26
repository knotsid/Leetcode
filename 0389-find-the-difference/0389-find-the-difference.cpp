class Solution {
public:
    char findTheDifference(string s, string t) {
        // char ch=0;
        // for(char itr:s) ch^=itr;
        // for(char itr:t) ch^=itr;
        // return ch;

        for(int i=0;i<s.size();i++){
            t[i+1]+=t[i]-s[i];
        }
        return t[t.size()-1];
    }
};