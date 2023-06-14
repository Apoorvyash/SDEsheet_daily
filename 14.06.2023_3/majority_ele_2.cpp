#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.

    int n=arr.size();
	unordered_map<int, int>mp;
	
	unordered_map<int, int>mp2;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	
	
	int maxx=n/3; set<int> maxx_ele;
	for(int i=0; i<n; i++){
		if(mp[arr[i]]>maxx){
			
			maxx_ele.insert(arr[i]);
			
		}
	}
    vector<int>maxxe;
    for (auto it = maxx_ele.begin(); it !=
                               maxx_ele.end(); ++it)
        maxxe.push_back(*it);
	return maxxe;
}
