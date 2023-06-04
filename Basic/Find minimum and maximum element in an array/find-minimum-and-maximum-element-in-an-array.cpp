//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long max=LONG_MIN, min=LONG_MAX;
    if(n==1){return {a[0],a[0]};}
    for(int i=0; i<n; i++){
        if(a[0]>a[1]){
            max=a[0];
            min=a[1];
        }
        else{
            max=a[1];min=a[0];
        }
        for(int i=2; i<n; i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        return {min, max};
        
    }
}