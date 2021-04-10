#include <algorithm>
#include <vector>
using namespace std;

class Solution {
  public:
    // o(n) complexity using stl
    int findMin(vector<int> &nums) { return *min_element(nums.begin(), nums.end()); }

    // o(n) complexity
    int findMin(vector<int> &nums) {
        int min = 5001;
        for (auto x : nums) {
            if (x < min)
                min = x;
        }
        return min;
    }

    // o(n) works but can I do better? o(log n)? yes

    // o(log n) using a filter i.e. True if nums[i] < nums[0] else False
    int findMin(vector<int> &nums) {

        int left = 0, right = nums.size() - 1, mid = 0; // normal binary search

        int boundary_index = -1; // one extra variable

        while (left <= right) {

            mid = (left + right) / 2; // standard stuff

            // found the first T so discard T and all the right of T
            if (nums[mid] <= nums[nums.size() - 1]) {
                boundary_index = nums[mid];
                right = mid - 1;
            }

            // still on F, let's move one step right
            else
                left = mid + 1;
        }
        return boundary_index;
    }
};