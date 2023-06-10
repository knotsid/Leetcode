class Solution {
public:
    int isPalindrome(int x) {
        int ans=0,copy=x;
        if(x<0) return false;
        while(x){
            int rem=x%10;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
                return 0;
            }
            ans=ans*10+rem;
            x=x/10;
        }
        if(ans==copy) return true;
        else return false;
    }
};