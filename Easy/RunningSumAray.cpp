class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        int count = 0;
        for (const int n : nums)
            vec.push_back(count += n);
        return vec;
    }
};