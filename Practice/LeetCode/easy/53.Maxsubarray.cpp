class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        int output[n];
        int ans=nums[0];
        output[0]=nums[0];
        
        
        for(int i=1;i<n;i++)
        {
            output[i]= std::max(nums[i],nums[i]+output[i-1]);
            ans= max(ans,output[i]);
        }
        return ans;
    
            
    } 
    
};