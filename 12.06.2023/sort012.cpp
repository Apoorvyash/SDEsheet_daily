void sort012(int a[], int n)
    {
        int h=n-1;
        int mid=0;
        int l=0;
        for(int i=0; i<n; i++){
            if(a[mid]==0){
                swap(a[mid], a[l]);
                l++;mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else if(a[mid]==2){
                swap(a[mid], a[h]);
                h--;
            }
        }
    }
