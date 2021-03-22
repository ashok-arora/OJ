#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // does not work
    vector<int> plusOne(vector<int> &digits) {

        // convert vector to int
        long long int result = 0;
        for (auto d : digits) {
            result = result * 10 + d;
        }

        // add one
        result += 1;

        // convert back to vector
        std::vector<int> numbers;
        while (result > 0) {
            numbers.push_back(result % 10);
            result /= 10;
        }

        std::reverse(numbers.begin(), numbers.end());
        return numbers;
    }

    // using reverse of the vector, time complexity = n + n + n + n = 4n
    vector<int> plusOne2(vector<int> &digits) {
        // n
        vector<int> res = digits;

        // n
        reverse(res.begin(), res.end());
        int temp = 1;

        // n
        for (int i = 0; i < res.size(); i++) {
            res[i] += temp;
            if (res[i] > 9) {
                res[i] = 0;
                temp = 1;
            } else
                temp = 0;
        }

        if (res[res.size() - 1] == 0)
            res.push_back(1);

        // n
        reverse(res.begin(), res.end());
        return res;
    }

    // without using reverse; modifies the original array, time complexity = n + n = 2n
    vector<int> plusOne3(vector<int> &digits) {
        int temp = 1;

        // n
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] += temp;
            if (digits[i] > 9) {
                digits[i] = 0;
                temp = 1;
            } else
                temp = 0;
        }

        if (digits[0] == 0) {
            // n
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

int main() { return 0; }