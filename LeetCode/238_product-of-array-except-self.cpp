class Solution {
  public:
    // TLE due to o(n^2) time complexity
    vector<int> TLE_productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> out;
        for (int i = 0; i < n; i++) {
            int prod = 1;
            for (int j = 0; j < n; j++) {
                if (j == i)
                    continue;
                else
                    prod *= nums[j];
            }
            out.push_back(prod);
        }
        return out;
    }

    // RTE due to division by zero in (prod/x) but time complexity here is o(n)
    vector<int> RTE_productExceptSelf(vector<int> &nums) {

        int prod = 1;
        for (auto x : nums) {
            prod *= x;
        }

        vector<int> ops;
        for (auto x : nums) {
            ops.push_back(prod / x);
        }
        return ops;
    };