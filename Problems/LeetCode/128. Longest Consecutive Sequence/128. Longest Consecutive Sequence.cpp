class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0) {
            return 0;
        }

        unordered_set<int> checkNeighbour(nums.begin(), nums.end());


        int maxLength = 1;

        for(int num : checkNeighbour) {

            if(checkNeighbour.find(num-1) == checkNeighbour.end()) {
                int curr = num+1;
                int length = 1;
                
                while(checkNeighbour.find(curr) != checkNeighbour.end()) {
                    curr++;
                    length++;
                }

                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
        
    }
};