#include <bits/stdc++.h> 
 int maximumProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i=0; i<prices.size(); i++){
            lsf=min(lsf, prices[i]);
            pist=prices[i]-lsf;
            op=max(op, pist);
        }
        return op;
    }
