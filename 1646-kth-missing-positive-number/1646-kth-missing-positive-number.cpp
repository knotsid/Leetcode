class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st=0, end=arr.size()-1;
        while(st<=end){
            int mid= st + (end-st)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k){
                st=mid+1;
            }
            else{
            end = mid-1;
            }
        }
        return k+end+1;
    }

    // int findKthPositive(vector<int>& arr, int k) {
    //     for(int i=0;i<arr.size();i++){
    //         if(arr[i]<=k) k++;
    //         else break;
    //     }
    //     return k;
    // }
};