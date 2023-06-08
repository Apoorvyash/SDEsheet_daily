//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int>dup(n, 0);
        for(int i=0; i<n; i++){
            dup[arr[i]]++;
        }
        vector<int>v;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(dup[i]>1){
                flag=true;
                v.push_back(i);
            }
        }
        if(!flag)return {-1};
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends