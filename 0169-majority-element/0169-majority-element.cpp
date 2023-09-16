class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0,n=nums.size();
        int ele;
        for(int i=0;i<n;i++){
            if(count == 0){
                count =1;
                ele=nums[i];
            }
            else if(ele == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int counter=0;
        for(int i=0;i<n;i++){
            if(ele==nums[i]){
                counter++;
            }
        }
        return counter>n/2 ? ele : -1;
    }
};