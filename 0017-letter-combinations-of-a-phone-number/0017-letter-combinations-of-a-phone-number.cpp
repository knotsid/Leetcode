class Solution {
public:

    void solve(string digits, vector<string>& res, string output, int index, string mapping[]){
        //base case
        if(index>=digits.length()){
            res.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string val = mapping[number];

        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits, res, output, index+1, mapping);
            output.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string output;
        int index=0;
        string mapping[10] = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz",
        };
        if(digits.length()==0)
            return res;
        solve(digits, res, output, index, mapping);
        return res;
    }
};