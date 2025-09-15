class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i =0; i< nums.size()-2; i++) {
            if(i>=1 && nums[i-1] == nums[i]){
                continue;
            }

            int left = i+1;
            int right = nums.size()-1;

            while(left<right) {
                int sum = nums[i]+nums[left]+nums[right];
                
                if( sum == 0) {
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    ans.push_back(temp);
                    while(left<right && nums[right]==nums[--right]) {
                        
                    }
                } else if(sum > 0) {
                    while(left<right && nums[right]==nums[--right]) {
                        
                    }
                } else if(sum < 0) {
                    while(left<right && nums[left]==nums[++left]) {
                        
                    }
                }
            }
        }

        return ans;
    }
};