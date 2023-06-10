//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int ans =0, copy= n;
		    if(copy<0) return "No";
		    while(copy){
		        int digit = copy%10;
		        if(ans > INT_MAX/10 || ans < INT_MIN/10){
		            return "No";
		        }
		        ans = (ans * 10) + digit;
		        copy/=10;
		    }
		    return ans == n ? "Yes" : "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends