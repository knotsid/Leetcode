//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int mx = *max_element(arr,arr+n);
        if(mx<0){
            return mx;
        }
        
        long long int maxTillNow = INT_MIN;
        long long int currMax = 0;
        for(int i=0 ;i<n;i++){
            currMax+=arr[i];
            if(currMax>maxTillNow){
                maxTillNow  = currMax;
            }
            if(currMax<0){
                currMax=0;
            }
        }
        return maxTillNow;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends