//This is a bottom up approach questions and can be solved by memoization:

class Solution {
public:
    int climbStairs(int n) {
        vector<int> numWaysToReachi(n+1);

        numWaysToReachi[0] = 1;
        numWaysToReachi[1] = 1;

        for(int i = 2; i<n+1; i++) {
            numWaysToReachi[i] = numWaysToReachi[i-1] + numWaysToReachi[i-2];
        }

        return numWaysToReachi[n];
    }
};