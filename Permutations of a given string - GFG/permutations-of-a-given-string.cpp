//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    void solve(string S, vector<string>& res, int index){
	        if(index >= S.length()){
	            res.push_back(S);
	            return;
	        }
	        
	        for(int i=index; i<S.length(); i++){
	            swap(S[index],S[i]);
	            solve(S, res,index+1);
	            //backtrack
	            swap(S[index],S[i]);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    vector<string> res;
		    int index = 0;
		    solve(S, res,index);
		    sort(res.begin(),res.end());
		    res.erase(unique(res.begin(), res.end()), res.end());
		    return res;
		    // Code here there
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends