class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> heap;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for(int number : nums) {
            heap.push(number);
            if (heap.size() > k) {
                heap.pop();
            }
        }
    }
    
    int add(int val) {
        heap.push(val);

        if (heap.size() > this->k) {
            heap.pop();
        }

        return heap.top();

    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */