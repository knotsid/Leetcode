class Solution {
public:
    bool buddyStrings(string s, string goal) {

        // edge case - if len of bot str is not equal or size is less than 1
        // we need atleast 2 char to swap
        if(s.size() != goal.size() || s.size()<=1){
            return false;
        }

        //edge case - if both str are equal, we check if they have duplicate char
        //if duplicate char is present that means we can swap them and return true
        //return true bcoz we did swap and string became equal
        if(s==goal){
            unordered_set<char> sett(s.begin(),s.end());
            return sett.size()<s.size();
        }

        //storing index of not matching chars btw s and goal
        vector<int> index;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                index.push_back(i);
            }
        }

        //if no. of mis match or not same char is not 2 means we can't perform swap
        if (index.size() != 2) {
            return false;
        }

        //swapping
        swap(s[index[0]], s[index[1]]);
        return s == goal;
    }
};