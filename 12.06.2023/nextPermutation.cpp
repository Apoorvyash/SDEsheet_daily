#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int ind=0;
    bool flag=false;
    for(int i=n-2; i>=0; i--){
        if(p[i]<p[i+1]){
            flag=true;
            ind=i;
            break;
        }
    }
    for(int i=n-1; i>=ind; i--){
        if(p[ind]<p[i]){
            swap(p[ind], p[i]);
            break;
        }

    }
    if(!flag){
        sort(p.begin(), p.end());
        return p;
    }
    sort(p.begin()+ind+1, p.end());
    return p;
}
