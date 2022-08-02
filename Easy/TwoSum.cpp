class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        res.reserve(2);
        multimap<int, int> mset;
        
        for (size_t i = 0; i < nums.size(); i++) {
            mset.insert({nums[i], i});
        }
        
        for (pair<int, int> p : mset) {
            auto tmp = mset.find(target - p.first);
            if (tmp == mset.end())
                continue;
            if (tmp != mset.end() && (tmp->second != p.second)) {
                res.push_back(p.second);
                res.push_back(tmp->second);
                return res;
            }
        }
        
        return res;
    }
};