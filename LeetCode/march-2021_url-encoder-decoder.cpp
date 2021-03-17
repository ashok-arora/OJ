#include <iostream>
#include <map>
#include <string>

// not a good solution but ok
class Solution {
  public:
    static long long unsigned int id;
    static std::map<long long unsigned int, std::string> umap;

    // Encodes a URL to a shortened URL.
    std::string encode(std::string longUrl) {

        umap[id] = longUrl;
        id++;
        return std::to_string(id - 1);
    }

    // Decodes a shortened URL to its original URL.
    std::string decode(std::string shortUrl) { return umap.find(std::stoi(shortUrl))->second; }
};

long long unsigned int Solution::id = 0;
std::map<long long unsigned int, std::string> Solution::umap = {{}};

int main() {
    Solution solution;
    std::string url = "https://leetcode.com/problems/design-tinyurl";
    std::cout << solution.decode(solution.encode(url));
    return 0;
}

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));