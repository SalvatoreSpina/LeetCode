class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pqueue;
        unsigned long long answ = 1;
        for (const int &n : nums)
            pqueue.push(n);
        while (k--) {
            int top = pqueue.top();
            pqueue.pop();
            pqueue.push(top+1);
        }
        while (!pqueue.empty()) {
            int top = pqueue.top();
            pqueue.pop();
            answ = (answ * top) % (unsigned long long)(1e9 + 7);
        }
        return answ;
    }
};