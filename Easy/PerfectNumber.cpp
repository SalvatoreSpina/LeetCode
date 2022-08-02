class Solution {
    
public:
    
    int divisors(int num) {
        int sum = 0;
        
        for (int i = 1; i < num / 2 + 1; i++) {
            if (num % i == 0) sum += i;
        }
        return sum;
    }
    
    bool checkPerfectNumber(int num) {
        return num == divisors(num);
    }
};