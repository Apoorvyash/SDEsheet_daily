#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
static bool comp(vector<int>a, vector<int>b){
        if(b[0]>a[0]){
            return true;
        }
        return false;
    }
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    
    
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
