class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  //if size is not equal of strings retuen false
            return false;
        
        sort(s.begin(),s.end());    //sort str 1
        
        sort(t.begin(),t.end());    //sort str 2
        
        if(s==t)                    //is str1 = str2 => they are anagram 
            return true;
        return false;
    }
};