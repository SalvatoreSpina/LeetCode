class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> counter;
        priority_queue<int> q;
        int res = 0, removed = 0;
        
        for (int n : arr) counter[n]++;
        for (pair<int, int> n : counter) q.push(n.second);
        
        while (removed < arr.size() / 2) {
            removed += q.top();
            q.pop();
            res++;
        }
        
        return res;
    }
};