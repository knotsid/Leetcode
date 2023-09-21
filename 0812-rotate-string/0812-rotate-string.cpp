class Solution {
public:
    bool rotateString(string s, string goal) {
        
        //not same length
        if(s.size()!=goal.size()){
            return false;
        }

        // if same or empty
        if(s==goal){
            return true;
        }

        // rotating and checking
        int len = s.size();
        while(len--){
            if(s==goal){
                return true;
            }

            // string without 0th char then adding 0th car to end
            s=s.substr(1)+s[0];
        }
        return false;
    }
};