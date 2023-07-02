class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<=end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            else if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end]))
                return false;
            else{
                st++;
                end--;
            }
        }
        return true;
    }
};