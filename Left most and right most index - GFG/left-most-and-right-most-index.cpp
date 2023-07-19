//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    
    int leftOcc(vector<long long> v, long long x){
        int start = 0;
        int end = v.size()-1;
        int mid = start + (end - start)/2;
        int res = -1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(v[mid]==x){
                res = mid;
                end = mid-1;
            }
            else if(v[mid]>x){
                end = mid-1;
            }
            else if(v[mid]<x){
                start = mid+1;
            }
        }
        return res;
    }
    
    int rightOcc(vector<long long> v, long long x){
        int start = 0;
        int end = v.size()-1;
        int mid = start + (end - start)/2;
        int res = -1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(v[mid]==x){
                res = mid;
                start = mid+1;
            }
            else if(v[mid]>x){
                end = mid-1;
            }
            else if(v[mid]<x){
                start = mid+1;
            }
        }
        return res;
    }
    
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int p1 = leftOcc(v, x);
        int p2 = rightOcc(v,x);
        pair<int, int>p;
        p.first = p1;
        p.second = p2;
        return p;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends