#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Using standard C++ function
    int searchInsert(vector<int> &nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }

    // Implementing lower_bound function using binary search
    static int searchInsert2(vector<int> const &nums, int target) {
        if (nums.size() < 1) {
            return -1;
        }

        int left = 0;
        int right = nums.size() - 1;

        int last_less = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // number found, return index
            if (nums[mid] == target) {
                return mid;
            }

            // number not in left half, ignore it => nums[mid] < target
            else if (nums[mid] < target) {
                last_less = mid;
                left = mid + 1;
            }

            // number not in right half, ignore it => nums[mid] > target
            else {
                right = mid - 1;
            }
        }

        return last_less + 1;
    }
};

int main() { cout << Solution::searchInsert2({1, 3, 5, 6}, 2); }