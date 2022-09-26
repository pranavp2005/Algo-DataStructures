class Solution {
public:
    
    int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size();
        int low=0;int hi=n-1;
        
        while(low<hi){
            
           int mid=low + (hi-low)/2;
            if(A[mid] >A[mid+1])
            {
                hi= mid;
            }
            else
            {
                low = mid+1;
            }
            }
        return low;
        
        
    }
};