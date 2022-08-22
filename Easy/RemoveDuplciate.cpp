class Solution {
    
    int pos = 0;
    
    int findFirst(vector<int> &nums, int i) {
        while (pos < nums.size() && nums[pos] <= nums[i]) pos++;
        return nums[pos];
    }
    
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) count++;
        }
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i-1]) {
                if (i == count) return count;
                nums[i] = findFirst(nums, i-1);
            }
        }
        return count;
    }
};