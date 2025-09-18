//C++ code
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> minCost(cost.size());
        minCost[0] = cost[0];
        minCost[1] = cost[1];

        for(int i = 2; i< cost.size(); i++) {
            cost[i] = min(cost[i-1] + cost[i], cost[i-2]+ cost[i]);
        }

        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
};