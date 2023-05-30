//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
    void solve(vector<int> nums, vector<int> tempAns, int index, vector<vector<int>>& res){
        //base case
        if(index >= nums.size()){
            res.push_back(tempAns);
            return ;
        }
        //exclude
        solve(nums, tempAns, index+1, res);

        //include
        int ele = nums[index];
        tempAns.push_back(ele);
        solve(nums, tempAns, index+1, res);

    }
    public:
    vector<vector<int> > subsets(vector<int>& nums)
    {
        vector<vector<int>> res;
        vector<int> tempAns;
        int index = 0;
        solve(nums, tempAns, index, res);
        sort(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends