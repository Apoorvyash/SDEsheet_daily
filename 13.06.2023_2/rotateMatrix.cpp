#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   int l=0, r=m-1, t=0, b=n-1;
   while(l<r && t<b){
       int temp=mat[t][l];
       for(int i=l+1; i<=r; i++){
           swap(mat[t][i], temp);
       }
        t++;
       for(int i=t; i<=b; i++){
           swap(mat[i][r], temp);
       }
        r--;
        for(int i=r; i>=l; i--){
           swap(mat[b][i], temp);
       }
        b--;
        for(int i=b; i>=t; i--){
           swap(mat[i][l],temp);
       }
        l++;
        mat[t-1][l-1] = temp;
   }

}
