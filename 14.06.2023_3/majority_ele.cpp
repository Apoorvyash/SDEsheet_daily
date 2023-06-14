#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int, int>mp;
	
	unordered_map<int, int>mp2;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	
	
	int maxx=n/2, maxx_ele=-1;
	for(int i=0; i<n; i++){
		if(mp[arr[i]]>maxx){
			
			maxx_ele=arr[i];
			
		}
	}
	return maxx_ele;
}
