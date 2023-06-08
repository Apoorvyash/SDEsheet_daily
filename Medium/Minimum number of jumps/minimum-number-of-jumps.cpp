//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int a[], int n){
        int j=0;
        int curr=0;
        while(curr!=n-1){
            if(a[curr]==0 && curr!=n-1){
                return -1;
            }
            if(a[curr]+curr>=n-1){
                j++;
                return j;
            }
            int st=0, start=curr+1;
            int end=a[curr]+start;
            int max_val=0, max_ind=-1;
            for(int x=start; x<min(end, n-1); x++ ){
                int val=a[x]+st;
                if(val>=max_val){
                    max_val=val;
                    max_ind=x;
                }
                st++;
            }
            curr=max_ind;
            j++;
            
        }
        return j;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends