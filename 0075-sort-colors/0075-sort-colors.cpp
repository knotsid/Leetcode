class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        //using mid for traversal
        int low = 0, mid = 0, high = n-1;
        while(mid<=high){
            //swapping to keep 0 on left side
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            // we need 1 in middle so ignoring
            else if(nums[mid]==1){
                mid++;
            }
            // swapping to keep 2 in right
            // not incrementing mid bcoz after swap there coule be 0 so we need to
            // handle it again and not skip it
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};