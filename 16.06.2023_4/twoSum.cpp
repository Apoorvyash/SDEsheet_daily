#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int k){
   int n=arr.size();
   vector<vector<int>>temp;
   if(n==1)return {{arr[0]}};
        unordered_map<int, int>mp;
        int cnt=0;
        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++)
            {if((k-arr[i])==arr[j]){
               (arr[i]<(arr[j]))?temp.push_back({arr[i], arr[j]}):temp.push_back({arr[j], arr[i]});
            }
            }
        }
   sort(temp.begin(), temp.end());
   return temp;
}
