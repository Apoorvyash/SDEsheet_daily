sort(arr,arr+n,[&](Item &a1,Item &a2){
            return ((double)a1.value/(double)a1.weight) > ((double)a2.value/(double)a2.weight);
        });
        double profit=0;
        for(int i=0;i<n;i++){
            int remW =W-arr[i].weight;
            if(remW<0){
                profit += (W*arr[i].value)/(double)(arr[i].weight);
                break;
            }
            else{
                profit += arr[i].value;
                W = remW;
            }
        }
        return profit;
