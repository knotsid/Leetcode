class Solution {
    
private:
    string strSort(string s){
         int counter[26] = {0};
         for(char c : s){
             counter[c - 'a']++;
         }
        string t;
        for (int c = 0; c < 26; c++) {
            t += string(counter[c], c + 'a');
        }
        return t;
    }
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mpp;
        for(string s : strs){
            mpp[strSort(s)].push_back(s);
        }
        vector<vector<string>> anagrams;
        
        for(auto p : mpp){
            anagrams.push_back(p.second);
        }
        return anagrams;
    }
};