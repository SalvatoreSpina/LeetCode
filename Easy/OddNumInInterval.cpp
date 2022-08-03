class Solution {

public:
    int countOdds(int low, int high) {
        
        int counter = 0;
        
        if (low % 2 == 0) low++;

        while (low <= high) {
            counter++;
            low += 2;
        }
        return counter;
    }
};