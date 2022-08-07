class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int key = nums.size() / 3;
        map<int, int> map;
        vector<int> res;
        
        for (vector<int>::const_iterator it = nums.begin(); it != nums.end(); it++) map[*it]++;
        
        for (auto it = map.begin(); it != map.end(); it++) {
            if (it->second > key) res.push_back(it->first);
        }
        
        return res;
        
    }
};