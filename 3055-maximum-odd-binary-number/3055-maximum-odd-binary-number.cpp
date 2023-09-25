class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res="";
        int count =-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        for (int i = 0; i < s.length()-1; i++) {
            if (i < count)    
                res += '1';
            else 
                res += '0';
        } 
        res+='1';
        return res;
    }
};