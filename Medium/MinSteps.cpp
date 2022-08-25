class Solution {
    map<char, int> str1, str2;
public:
    int minSteps(string s, string t) {
        
        int count = 0;
        vector<int> arr(26,0);
        for (const char c : s) arr[c-'a']++;
        for (const char c : t) arr[c-'a']--;
        for (const int n : arr) count += abs(n);
        return count;
    }
};