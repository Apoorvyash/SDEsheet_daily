//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    static bool comp(vector<int>a, vector<int>b){
        if(b[0]>a[0]){
            return true;
        }
        return false;
    }
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         //sort in the ascending order of end time
         int n=intervals.size();
         sort(intervals.begin(), intervals.end(), comp);
         vector<vector<int>>v={intervals[0]};
         for(int i=0; i<n; i++){
            if(v.back()[1]>=intervals[i][0]){
                v.back()[1]=max(v.back()[1],intervals[i][1]);
            }
            else{
                
                v.push_back(intervals[i]);
            }
         }
         return v;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends