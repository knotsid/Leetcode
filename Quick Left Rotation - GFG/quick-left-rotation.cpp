//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int d, int n) 
	{ 
	    d=d%n;
	   // array to store starting digits upto k
	   int temp[d];
	   
	   // adding k elements to temp array
	   for(int i=0;i<d;i++){
	       temp[i] = arr[i];
	   }
	   
	   // moving elements after k to starting
	   for(int i=d;i<n;i++){
	       arr[i-d] = arr[i];
	   }
	   
	   // adding temp values to original array
	   for(int i=n-d;i<n;i++){
	       arr[i] = temp[i-(n-d)];
	   }
	} 
};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends