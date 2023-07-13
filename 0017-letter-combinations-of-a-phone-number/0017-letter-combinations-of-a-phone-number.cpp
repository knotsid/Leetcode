class Solution {
public:
    void solve(string digits, string output, int index, string mapping[], vector<string> &res){

        //base case
        if(index>=digits.length()){
            res.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string val = mapping[num];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits, output, index+1, mapping, res);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length()==0){
            return res;
        }
        string output = "";
        int index = 0;
        string mapping[] = {"", "", "abc","def","ghi","jkl", "mno","pqrs", "tuv","wxyz"};
        solve(digits, output, index, mapping, res);
        return res;
    }
};