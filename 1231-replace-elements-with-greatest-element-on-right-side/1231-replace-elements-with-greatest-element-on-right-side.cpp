class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp,mx=-1;
        int n = arr.size();
        for(int i=n-1; i>=0;i--){
            temp = arr[i];
            arr[i]=mx;
            mx=max(temp,mx);
        }
        return arr;
    }
};