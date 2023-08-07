class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sett;
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int longest = 1;

        for(auto itr : nums){
            sett.insert(itr);
        }

        for(auto it : sett){
            if(sett.find(it-1) == sett.end()){
                int cnt = 1;
                int key = it;
                while(sett.find(key+1)!=sett.end()){
                    cnt+=1;
                    key+=1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};