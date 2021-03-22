#include <iostream>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

class Solution {
  public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10)
                return 0;
            if (rev < INT_MIN / 10)
                return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }

    // slower
    int reverse2(int x) {
        bool neg = false;
        if (x == INT_MIN || x == INT_MAX)
            return 0;
        if (x < 0) {
            neg = true;
            x = -1 * x;
        }
        int reverse = 0;
        while (x) {
            if (reverse > (INT_MAX / 10)) {
                return 0;
            } else {
                reverse = reverse * 10 + (x % 10);
                x /= 10;
            }
        }
        if (neg)
            return -1 * reverse;
        else
            return reverse;
    }
};
