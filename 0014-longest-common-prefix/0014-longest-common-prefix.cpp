class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // to get longest string at end of vector
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int index = 0;
        while(index < s1.length() && index < s2.length()){
            if(s1[index] == s2[index]){
                index++;
            }
            else{
                break;
            }
        }
        return s1.substr(0, index);
    }
};