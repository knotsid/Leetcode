//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
//---------------------------------------BRUTE FORCE - TLE
// 	int search1(int arr[], int n){
	    
// 	    //selecting one digit form array to compare from
// 	    for(int i=0;i<n;i++){
// 	        int num = arr[i];
// 	        int count = 0;
	        
// 	        //comparing and updating counter
// 	        for(int j=0;j<n;j++){
// 	            if(arr[j]==arr[i]){
// 	                count++;
// 	            }
// 	        }
	        
// 	        //only one occurrence then ans
// 	        if(count==1){
// 	            return num;
// 	        }
// 	    }
// 	    return 0;
// 	}
//----------------------------------------BETTER - Hashing (for +ve elements)
// 	int search(int arr[], int n){
// 	   int maxi=INT_MIN;    //store max ele from array
	   
// 	   // finding max ele
// 	   for(int i=0;i<n;i++){
// 	    maxi= max(arr[i],maxi);
// 	   }
	   
// 	   //hashing 
// 	   int hash[maxi]={0};
// 	   for(int i=0;i<n;i++){
// 	    hash[arr[i]]++;
// 	   }
	   
// 	   //finding in hash array
// 	   for(int i=0;i<n;i++){
// 	    if(hash[arr[i]]==1)
// 	    return arr[i];
// 	   }
// 	   return 0;
// 	}
	
//----------------------------------------OPTIMAL
	int search(int arr[], int n){
	    int XOR = 0;
	    //XOR ing all arr
	    for(int i=0;i<n;i++){
	        XOR = XOR ^ arr[i];
	    }
	    return XOR;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends