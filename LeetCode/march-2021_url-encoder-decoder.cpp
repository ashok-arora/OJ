#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// not a good solution but ok
class Solution {
  public:
    static long long unsigned int id;
    static unordered_map<long long unsigned int, string> umap;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {

        umap[id] = longUrl;
        id++;
        return std::to_string(id - 1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) { return umap.find(stoi(shortUrl))->second; }
};

long long unsigned int Solution::id = 0;
unordered_map<long long unsigned int, string> Solution::umap = {{}};

int main() {
    Solution solution;
    string url = "https://leetcode.com/problems/design-tinyurl";
    cout << solution.decode(solution.encode(url));
    return 0;
}

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));