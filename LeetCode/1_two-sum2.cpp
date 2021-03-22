#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target) {
        std::unordered_map<int, int> hash; // Number, Index

        for (int i = 0; i < numbers.size(); i++) {
            int numberToFind = target - numbers[i];

            if (hash.find(numberToFind) != hash.end())
                return {hash[numberToFind], i};

            hash[numbers[i]] = i;
        }
        return {};
    }

    // using iterators
    std::vector<int> twoSum2(std::vector<int> &nums, int target) {
        std::unordered_map<int, int> imap;

        for (int i = 0;; ++i) {
            auto it = imap.find(target - nums[i]);

            if (it != imap.end())
                return std::vector<int>{i, it->second};

            imap[nums[i]] = i;
        }
    }
};

int main() {
    Solution solution;
    return 0;
}
