class Solution {
    
public:
    
    int answ(vector<int>& nums) {
        int a = 0, b = 0, res = 0;
        
        for (int i = 0; i < nums.size(); ++i){
            res = max(b + nums[i], a);
            b = a;
            a = res;
        }
        
        return res;
    }

    int rob(vector<int>& nums) {
        if (nums.empty())
            return 0;
        if (nums.size() == 1)
            return nums[0];
        
        vector<int> A(nums.begin() + 1, nums.end());
        vector<int> B(nums.begin(), nums.end() - 1);
        
        return max(answ(A), answ(B));
    }

};