class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        short size = 0;
        for (short i = 0; i < nums.size(); i++) {
            if (nums[i] != val)
                nums[size++] = nums[i];
        }
        return (int)size;
    }
};