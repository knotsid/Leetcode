class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int opened = 0;
        for(auto i : s){
            if(i == '('){
                if(opened > 0) {
                    res+=i;
                }
                opened++;
            }
            else{
                if(opened > 1){
                    res+=i;
                }
                opened--;
            }
        }
        return res;
    }
};