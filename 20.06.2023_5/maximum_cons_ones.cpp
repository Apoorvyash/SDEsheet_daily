

int longestSubSeg(vector<int> &arr , int n, int k){
    int l=0,r=0,maxl=0;
    while(r<n){
        if(arr[r]==1){
            r++;continue;
        }
        else if(k>0){
            k--;
            r++;
        }
        else{
            maxl=max(maxl, r-l);
            while(l<=r && k==0){
                if(arr[l]==0){
                    k++;
                }
                l++;
            }
        }
    } 
    maxl=max(maxl, r-l);
    return maxl;   
}
