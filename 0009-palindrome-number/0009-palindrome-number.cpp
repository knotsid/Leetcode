class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;

        int ans = 0, num=x;
        while(num!=0){
            int rem=num%10;
            num/=10;
            if(ans>INT_MAX/10) return false;
            ans =ans * 10 + rem;
        }

        return x==ans;
    }
};