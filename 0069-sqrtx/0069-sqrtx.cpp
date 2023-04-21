class Solution {
public:
    long long int mySqrt(int x) {
        long long int start = 0, end = x,ans =-1;
        long long int mid = start + (end - start)/2;
        while(start<=end){
            long long int square = mid*mid;
            if(square == x){
                return mid;
            }
            if(square < x){
                ans = mid;
                start=mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
};