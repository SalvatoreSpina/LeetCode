class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        vector<int> v2;
        map<int, int> map;
        
        for (vector<int>::const_iterator it = arr1.begin(); it != arr1.end(); it++) {
            if (map.find(*it) != map.end())
                map[*it]++;
            else map[*it] = 1;
        }
        
        for (vector<int>::const_iterator it = arr2.begin(); it != arr2.end(); it++) {
            if (map.find(*it) != map.end()) {
                while (map[*it]) {
                    v.push_back(*it);
                    map[*it]--;
                };
            }
        }
        int n = 0;
        
        for (const pair<int, int> p : map) {
            n = p.second;
            while (n > 0) {
                v2.push_back(p.first);
                n--;
            }
        }
        sort(v2.begin(), v2.end());
        for (const int n : v2) {
            v.push_back(n);
        }
        return v;
    }
};