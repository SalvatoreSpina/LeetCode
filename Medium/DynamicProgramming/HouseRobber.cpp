class Solution {
public:

    int rob(vector<int>& nums) {
        int a = 0, b = 0, res = 0;
        
        for (int i = 0; i < nums.size(); ++i){
            res = max(b + nums[i], a);
            b = a;
            a = res;
        }
        
        return res;
    }

};