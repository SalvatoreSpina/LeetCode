class Solution {
public:
    int find(vector<int>& vec, int tr){
        return lower_bound(vec.begin(), vec.end(), tr) - vec.begin();
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        
        for (vector<int>::const_iterator it = nums.begin(); it != nums.end(); it++) {
            if (vec.empty() || *it > vec.back()) vec.push_back(*it);
            else vec[find(vec, *it)] = *it;
        }
        return vec.size();
    }
    
};