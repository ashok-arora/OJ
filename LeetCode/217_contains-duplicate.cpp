#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
  public:
    // o(n logn)
    bool containsDuplicate(std::vector<int> &nums) {
        int n = nums.size() - 1;
        std::sort(nums.begin(), nums.begin() + n);
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }

    // o(n logn) using STL
    bool containsDuplicateSTL(std::vector<int> &nums) {
        set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();
    }

    // o(n)
    bool containsDuplicateHash(std::vector<int> &nums) {
        std::unordered_set<int> uset;

        for (auto x : nums) {
            if (uset.find(x) != uset.end())
                return true;
            uset.insert(x);
        }
        return false;
    }

    // Note: For certain test cases with not very large n, the runtime of o(n) method can be slower
    // than o(n logn)
    //       due to large overhead of a hash set. - Source: Leetcode
};