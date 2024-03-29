//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //      2 POINTER APPROACH
    
    // int remove_duplicate(int arr[],int n){
    //     // code here
    //     int currIndex = 0;
    //     int i = 0;
    //     while(i<n){
    //         if(arr[currIndex] != arr[i]){
    //             currIndex++;
    //             arr[currIndex] = arr[i];
    //         }
    //         i++;
    //     }
    //     return currIndex+1;
    // }
    
    int remove_duplicate(int arr[],int n){
        // code here
        set<int> s;
        int index = 0;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(auto itr : s){
            arr[index] = itr;
            index++;
        }
        return index;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends