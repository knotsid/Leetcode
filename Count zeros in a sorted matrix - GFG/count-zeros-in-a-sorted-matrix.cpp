//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
    {
        int cntZero = 0;

        int N = A.size();

        int row = 0, col = N - 1;
        while(col >= 0 && row < N){
            if(A[row][col] == 0){
                cntZero+=col+1;
                row++;
            }
            else col--;
        }

        return cntZero;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends