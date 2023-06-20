#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(), arr.end());
    string ans="";
    for(int i=0; i<n; i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(j!=(i+1) && arr[j]==arr[j-1]){
                continue;
            }
            
            int k=j+1, l=n-1;
            while(k<l){
                int sum=arr[i]+arr[j];
                // if(k!=j+1 && arr[k]==arr[k-1]){
                //     continue;
                // }
                // if(l<n-1 && arr[l]==arr[l+1]){
                //     continue;
                // }

                sum+=arr[l];
                sum+=arr[k];
                if (sum == target) {
                ans= "Yes";
                k++;l--;
                while(k<l && arr[k]==arr[k-1]){
                    k++;
                }
                while (k<l && arr[l] == arr[l + 1]) {
                  l--;
                }
                } else if (target < sum) {
                  l--;
                } else {
                  k++;
                }
            }
                
                
             }
        
            
        }
    
    if(ans=="")
    return "No";
    return "Yes";
}
