#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> p(n);
    int k=0;
    for(int i=0; i<n; i++){
      k++;
      for(int j=0; j<k; j++){
        if(j==0 || j==k-1){
          p[i].push_back(1);
        }
        else{
          p[i].push_back(p[i-1][j-1]+p[i-1][j]);
        }
      }
    }
    return p;
}
