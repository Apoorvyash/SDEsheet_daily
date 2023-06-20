class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        //int maxi=*max_element(nums.begin(), nums.end());
        unordered_map<int, int>mp;
        int maxi=0;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]-1)!=mp.end()){
                continue;
            }
            else{
                int cnt=0;int ele=nums[i];
                while(mp.find(ele)!=mp.end()){
                    cnt++;ele++;
                }
                maxi=max(cnt, maxi);
            }
        }
        return maxi;
    }
};
