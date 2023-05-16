class Solution {
    
private:
    string strSort(string s){
         int counter[26] = {0};     //counting sort implementation
         for(char c : s){           //iteratig over every character of string passed
             counter[c - 'a']++;    //counting number of occurrence of each character
         }
        string t;
        for (int c = 0; c < 26; c++) {          
            t += string(counter[c], c + 'a');       //creating a string based on index, 
        }                                           //ex: c=0 means 'a' since 0 pos has 1 it makes a new string 'a' and
        return t;                                   //appends it to string t which was empty earlier.
    }
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mpp;  //created a map to store key : value pairs
        for(string s : strs){                       //taking individual string from array strs
            mpp[strSort(s)].push_back(s);           //fn sorts the string and uses it as a key to append oroginal string
        }
        vector<vector<string>> anagrams;            //required format of answer
        
        for(auto p : mpp){                          //mpp has sorted string as key and actual string as values
            anagrams.push_back(p.second);           //appending values that are stored in vector to the anagram
        }
        return anagrams;
    }
};