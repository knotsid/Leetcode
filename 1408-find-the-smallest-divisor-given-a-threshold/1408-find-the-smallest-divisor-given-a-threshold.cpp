class Solution {
public:
    int sumByD(vector<int>arr, int div){
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += ceil((double)(arr[i])/(double)div);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        int st=1, end = *max_element(arr.begin(),arr.end());

        while(st<=end){
            int mid = (st+end)/2;
            if(sumByD(arr,mid)<=threshold){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;
    }
};