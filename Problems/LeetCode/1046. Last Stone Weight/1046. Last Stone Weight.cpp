//C++ code
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) {
            return stones[0];
        }

        //default is max heap
        priority_queue<int> maxHeap;

        for(int stone : stones) {
            maxHeap.push(stone);
        }

        while((maxHeap.size() != 1 && !maxHeap.empty())) {
            int stone1 = maxHeap.top();
            maxHeap.pop();
            int stone2 = maxHeap.top();
            maxHeap.pop();


            if (stone1 == stone2) {
                continue;
            } else {
                int newStone = max(stone1, stone2) - min(stone1, stone2);
                maxHeap.push(newStone);
            }
        }

        if (maxHeap.size() == 1) {
            return maxHeap.top();
        }
        return 0;
    }
};