class Solution {
public:
    int countVowelPermutation(int n) {
        long a = 1, e = 1, i = 1, o = 1, u = 1, mod = pow(10, 9)+7;
        long new_a, new_e, new_i, new_o, new_u; 
        
        for (int j = 1; j < n; j++) {
            new_a = (e + i + u) % mod;
            new_e = (a + i) % mod;
            new_i = (e + o) % mod;
            new_o = i;
            new_u = (o + i) % mod;
            
            a = new_a, e = new_e, i = new_i, o = new_o, u = new_u;
        }
        return (a + e + i + o + u) % mod;
    }
};