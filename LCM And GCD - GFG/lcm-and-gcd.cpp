//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long A , long long B) {
        // code here
        while(A > 0 && B > 0){
            if(A > B){
                A  = A % B;
            }
            else{
                B = B % A;
            }
        }
        if(A == 0) return B;
        return A;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v;
        long long gcdNo = gcd(A,B);
        long long lcmNo = (A*B) / gcdNo;
        v.push_back(lcmNo);
        v.push_back(gcdNo);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends