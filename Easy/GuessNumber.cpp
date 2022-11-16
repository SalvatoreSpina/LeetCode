/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
         
public:
    
    int guessNumber(int n) {
        int max = n, min = 1, mid, ans;
        while (true) {
            mid = (max - min) / 2 + min;
            ans = guess(mid);
            if (ans == 0) return mid;
            ans == 1 ? min = mid + 1 : max = mid - 1;
        }
    }
};