class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0;
        vector<int> vec;
        vec.reserve(queries.size());
        
        for (const int &n : nums)
                sum += n * !(n % 2);
        
        for (vector<int> &q : queries)
        {
            if (nums[q[1]] & 1)
                sum += (q[0] & 1) * (nums[q[1]] + q[0]);
            else
                sum -= (q[0] & 1 ? nums[q[1]] : -q[0]);
            nums[q[1]] += q[0];
            vec.push_back(sum);
        }
        return vec;
    }
};