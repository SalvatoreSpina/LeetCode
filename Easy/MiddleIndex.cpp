class Solution {
    
    int sum, lsum;

public:
    int findMiddleIndex(vector<int>& nums) {
        
        for (vector<int>::const_iterator it = nums.begin(); it != nums.end(); it++)
            sum += *it;
        
        for (int i = 0; i < nums.size(); i++) {
            sum -= nums[i];
            if (sum == lsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};