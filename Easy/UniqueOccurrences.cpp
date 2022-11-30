class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;
        set<int> set;

        for (int &n : arr)
            hash[n]++;
        for (auto &[n, occ] : hash)
            set.insert(occ);
        
        return hash.size() == set.size();    
    }
};