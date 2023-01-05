bool custom_sort(vector<int>& lhs, vector<int>& rhs) { return lhs[1] < rhs[1]; }

class Solution {
public:  
    int findMinArrowShots(vector<vector<int>>& segments) {
        sort(segments.begin(), segments.end(), custom_sort);
        int answ = 0, arrows = 0;
        for (auto &segment : segments) {
            if (!answ || segment[0] > arrows) {                
                arrows = segment[1];
                ++answ;
            }
        }
        return answ;
    }
};