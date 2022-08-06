class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size = nums1.size() + nums2.size();
        
        multiset<int> mset;
        for (vector<int>::const_iterator it = nums1.begin(); it != nums1.end(); it++)
            mset.insert(*it);
        for (vector<int>::const_iterator it = nums2.begin(); it != nums2.end(); it++)
            mset.insert(*it);
        
        auto tmp = next(mset.begin(), size/2);
        if (size % 2 == 1) return *tmp;
        return double((double(*tmp) + double(*--tmp)) / 2);
    }
};