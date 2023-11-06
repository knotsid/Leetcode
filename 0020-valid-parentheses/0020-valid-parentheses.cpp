class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty() ||
                (ch==')' && st.top()!='(') ||
                (ch=='}' && st.top()!='{') ||
                (ch==']' && st.top()!='[')){
                    return false; // invalid string case
                }
                // pop opening bracket bcoz string is valid
                // and st.top is closing bracket 
                // as we already check opening bracket in if stat
                st.pop(); 
            }
        }
        // empty means all brackets paired up
        return st.empty();
    }
};