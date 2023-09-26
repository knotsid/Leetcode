class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch=0;
        for(char itr:s) ch^=itr;
        for(char itr:t) ch^=itr;
        return ch;
    }
};