class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        vector<int>maxL(n,0);
        vector<int>maxR(n,0);
        maxL[0]=arr[0];
        maxR[n-1]=arr[n-1];
        for(int j=1; j<n; j++){
                maxL[j]=max(maxL[j-1], arr[j]);
            }
            for(int j=n-2; j>=0; j--){
                maxR[j]=max(maxR[j+1], arr[j]);
            }
        for(int i=0; i<n; i++){
            sum+=(min(maxL[i], maxR[i])-arr[i]);
        }
        return sum;

    }
};
