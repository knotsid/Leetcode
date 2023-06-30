//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends

// --------------------------BRUTE FORCE # TLE ---------------------------

// int missingNumber1(int arr[], int N)
// {
//     for(int i=1;i<=N;i++){
//         int flag = 0;
//         for(int j=0;j<N-1;j++){
//             if(i==arr[j]){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag==0){
//             return i;
//         }
//     }
// }
int missingNumber(int arr[], int N)
{
    int hash[N+1] = {0};
    for(int i=0;i<N-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=N;i++){
        if(hash[i]==0){
            return i;
        }
    }
    
}
// int missingNumber2(int arr[], int N)
// {
//     // Your code goes here
//     int total,calculated_sum=0;
//     total=(N) * (N + 1) / 2;
//     for(int i=0;i<N-1;i++)
//         total-=A[i];
//     return total;
// }