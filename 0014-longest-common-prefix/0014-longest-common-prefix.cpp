class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // to get longest string at end of vector
        sort(strs.begin(),strs.end());

        // storing smallest length string
        string s1=strs[0];

        //storing longest length string
        string s2=strs[strs.size()-1];

        // iterator to traverse and check characters
        int index=0;

        // comparing characters btw smallest and longest string
        while(index<s1.size()&&index<s2.size()){
            if(s1[index]==s2[index]){
                index++;
            }
            else{
                break;
            }
        }
        return s1.substr(0,index);
    }
};