#include <string>

class Solution {
  public:
    int strStr(const std::string &haystack, const std::string &needle) {
        if (needle == "")
            return 0;
        return haystack.find(needle);
    }
};

int main() { return 0; }