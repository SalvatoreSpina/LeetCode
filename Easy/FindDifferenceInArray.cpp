class Solution {

public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s1, s2;
        
        for (int n : nums1)
            s1.insert(n);
        for (int n : nums2)
            s2.insert(n);
        
        vector<vector<int>> res;
        res.resize(2);
        for (int n : s1) {
            if (s2.find(n) == s2.end())
                res[0].push_back(n);
        }
        for (int n : s2) {
            if (s1.find(n) == s1.end())
                res[1].push_back(n);
        }
        return res;
    }
};