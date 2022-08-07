class Solution {
    vector <int> memo;
public:
    
    int calculator(vector<int>& nums, int target, int size) {
        if (target == 0) return 1;
        if (memo[target] != -1) return memo[target];
        
        int counter = 0;
        
        for (int i = 0; i < size; i++) {
            if (nums[i] <= target) counter += calculator(nums, target-nums[i], size);
        }
        memo[target] = counter;
        return counter;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        int size = nums.size();
        memo.resize(target + 1, -1);
        return calculator(nums, target, size);
    }
};