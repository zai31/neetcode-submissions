class KthLargest {
private:
    priority_queue<int> maxHeap;
    vector<int> all; // to store all inserted elements
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            all.push_back(num);
            maxHeap.push(num);
        }
    }

    int add(int val) {
        all.push_back(val);
        maxHeap.push(val);

        // Create a temporary heap to extract k-th largest
        priority_queue<int> temp = maxHeap;

        int result = -1;
        for (int i = 0; i < k; ++i) {
            result = temp.top();
            temp.pop();
        }

        return result;
    }
};
