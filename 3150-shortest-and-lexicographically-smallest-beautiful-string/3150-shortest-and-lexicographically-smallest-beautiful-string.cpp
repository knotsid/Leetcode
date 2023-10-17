class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans;
        int l=0,r=0;
        int cnt=0;
        while(r<n)
        {
            if(s[r]=='1')
                cnt++;
            if(cnt==k)
            {   
                while(l<n && cnt==k)
                {
                    string s1=s.substr(l,r-l+1);
                    if(ans.size()==0 || s1.size()<ans.size())
                        ans=s1;
                    else if(s1.size()==ans.size())
                        ans=min(ans,s1);
                    if(s[l]=='1')
                        cnt--;
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};