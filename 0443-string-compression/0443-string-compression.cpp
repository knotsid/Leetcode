class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int currIndex = 0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            chars[currIndex++] = chars[i];
            int count = j-i;
            if(count>1){
                string str = to_string(count);
                for(char ch : str){
                    chars[currIndex++] = ch;
                }
            }
            i=j;
        }
        return currIndex;
    }
};