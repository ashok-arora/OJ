class Solution {
public:
    /// Using string-reverse functions
    bool isPalindrome(int x) {
        std::string s = std::to_string(x), rev(s);
        std::reverse(rev.begin(), rev.end());
        return (rev == s);
    }

    /// without converting to string
    bool isPalindrome(int x) {
        // edge case: x is negative || x ends with 0
        // x can't be negative and palindrome because of minus sign
        // if x ends with 0, it has to be start with 0 too, only possible when x = 0
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }
        
        int revertedNumber = 0;

        // stop when x < revertedNumber
        while(x > revertedNumber) { 
            
            // revertedNumber => last_x_digit * 10 + current digit
            revertedNumber = (revertedNumber * 10) + (x % 10);
            
            // remove the last digit from x
            x /= 10;
        }

        // when x = 12321, return 12 = 123 or 12 = 12
        return (x == revertedNumber || x == revertedNumber/10);
    }
};