class Solution {
  public:
    int splitArray(const std::vector<int> &pages, const int &m) {
        long left = *max_element(pages.begin(), pages.end());
        long right = std::accumulate(pages.begin(), pages.end(), (long)0);
        long mid;

        auto count_student = [&](long this_sum) {
            long count = 1, running_sum = 0;
            for (int page : pages) {
                if (running_sum + page <= this_sum) {
                    running_sum += page;
                } else {
                    running_sum = page;
                    count++;
                }
            }
            return count;
        };

        while (left < right) {
            mid = ((unsigned)left + (unsigned)right) >>
                  1; // prevent overflow for large value of left and right
            if (count_student(mid) <= m)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
