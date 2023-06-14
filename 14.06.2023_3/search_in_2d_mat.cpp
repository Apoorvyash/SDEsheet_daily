
bool binarySearch(vector<int>arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return true;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return false;
}
 

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    for(int i=0; i<n; i++){
        vector<int>arr=mat[i];
        if (binarySearch(arr, 0, arr.size()-1, target))
            return true;
        
        
    }
    return false;
}
