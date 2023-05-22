class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        set<int> sett;
        for(auto itr : arr){
            mpp[itr]++;
        }
        for(auto &p : mpp){
            sett.insert(p.second);
        }
        return sett.size()==mpp.size() ? true : false;
    }
};