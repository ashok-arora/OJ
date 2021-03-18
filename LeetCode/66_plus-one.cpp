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
};

int main(){
    return 0;
}