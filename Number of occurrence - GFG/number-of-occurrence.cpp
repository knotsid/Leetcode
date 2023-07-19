//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:

    int leftOcc(int arr[], int n, int x){
        int start = 0;
        int end = n;
        int mid = start + (end -start)/2;
        int res = -1;
        while(start <= end){
            mid = start + (end -start)/2;
            if(arr[mid]==x){
                res = mid;
                end = mid-1;
            }
            else if(arr[mid] < x){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return res;
    }
    
    int rightOcc(int arr[], int n, int x){
        int start = 0;
        int end = n;
        int mid = start + (end -start)/2;
        int res = -1;
        while(start <= end){
            mid = start + (end -start)/2;
            if(arr[mid]==x){
                res = mid;
                start = mid+1;
            }
            else if(arr[mid] < x){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return res;
    }

public:	

	int count(int arr[], int n, int x) {
	    
	    int left = leftOcc(arr,n,x);
	    if(left == -1){
	        return 0;
	    }
	    int right = rightOcc(arr,n,x);
	    
	    return right - left + 1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends