class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> sett(nums1.begin(),nums1.end()); //adding nums1 to set
        vector<int> res;
        for(auto itr : nums2){
            //.count return number of occurrence 
            if(sett.count(itr)){
                //if count is not 0 this means ele of nums2 is present in nums1
                //add ele to res
                res.push_back(itr);
                //remove the ele from set as only one occurrence is needed
                sett.erase(itr);
            }
        }
        return res;
    }
};