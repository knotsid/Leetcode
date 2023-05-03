class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        //counting occurrences of characters of s1
        
        vector<int> counts1 (26, 0);
        for (auto c : s1) counts1[c - 'a']++;
        
        //making a window of length s1, will be using it to traverse in s2
        
        int i=0;
        int windowLen = s1.length();
        vector<int> counts2 (26, 0);
        
        //first time looking through window i.e 1st iteration
        
        while(i<windowLen && i<s2.length()){
            int index = s2[i] - 'a';
            counts2[index]++;
            i++;
        }
        
        if (counts1 == counts2) return 1;

        //now for upcoming iterations
        
        while(i < s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            counts2[index]++;
            
            char oldChar = s2[i-windowLen];
            index = oldChar - 'a';
            counts2[index]--;
            i++;
            
            if (counts1 == counts2) return 1;
        }
        return 0;
        
        
        
    }
};