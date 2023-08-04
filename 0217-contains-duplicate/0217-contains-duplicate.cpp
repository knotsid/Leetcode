class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sett;
        for(int num : nums){
            if(sett.count(num)>0){
                return true;
            }
            sett.insert(num);
        }
        return false;
    }
};