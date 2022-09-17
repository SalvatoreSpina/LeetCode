class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        char res = 0;
        for (string str : operations)
            str[1] == '+' ? res++ : res--;
        return res;
    }
};