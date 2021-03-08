#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Solution {
  public:

    // Using STL
    int removeElement(std::vector<int> &nums, int val) {
        // return nums.size() - count(nums.begin(), nums.end(), val);
        return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
    }

    // Without using STL
    int removeElement2(std::vector<int> &nums, int val) {
        if (nums.size() == 0)
            return 0;

        int ptr = 0;
        // did not use range-based for loop
        // because of failing edge case:
        // {0,1,2,2,3,0,4,2} 2
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[ptr] = nums[i];
                ptr++;
            }
        }

        return ptr;
    }

};

int main(){
    std::vector<int> V = {3,2,2,3};
    Solution S;
    std::cout << S.removeElement2(V, 3) << std::endl;
    for (int x : V) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}