class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        int l =0, r = height.size()-1;

        while(l < r) {
            if(height[l] <= height[r]) {
                maxWater = max(maxWater, height[l]*(r-l));
                l++;
            } else {
                maxWater = max(maxWater, height[r]*(r-l));
                r--;
            }
        }

        return maxWater;
    }
};