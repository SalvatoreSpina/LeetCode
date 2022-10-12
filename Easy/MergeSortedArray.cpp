class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>::iterator it = nums1.begin() + m;
        for (const int &n : nums2)
            *it++ = n;
        sort(nums1.begin(), nums1.end());
    }
};