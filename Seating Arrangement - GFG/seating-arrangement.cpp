//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        if (n > m) {
            return false;
        }
        if (n == 0) {
            return true;
        }
        if (m == 1) {
            return seats[0] == 0;
        }
    
        int i = 0;
    
        while (i < m) {
            if (seats[i] == 0) {
                if (i == 0) {
                    if (seats[i + 1] != 1) {
                        n--;
                        if(n==0) return true;
                        seats[i] = 1;
                    }
                } 
                else if (i == m - 1) {
                    if (seats[i - 1] != 1) {
                        n--;
                        if(n==0) return true;
                        seats[i] = 1;
                    }
                } 
                else if (seats[i - 1] != 1 && seats[i + 1] != 1){
                        n--;
                        if(n==0) return true;
                        seats[i] = 1;
                }
            }
            i++;
        }
    
        return n == 0;
    }
    

};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends