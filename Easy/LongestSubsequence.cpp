class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int nums_size = nums.size();
        int queries_size = queries.size();
        
        sort(nums.begin(),nums.end());
        int sum = 0;
        vector<int> sums;
        
        for (const int &n : nums) {
            sum += n;
            sums.push_back(sum);
        }
        
        vector<int> ans(queries_size, 0);
        for (int i = 0; i < queries_size; i++) {
            for (int j = 0; j < nums_size; j++) {
                if (sums[j] <= queries[i])
                    ans[i] = j+1;
                else
                    break;
            }
        }
        return ans;
    }
};