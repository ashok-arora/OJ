#include <string>

class Solution {
  public:
    int romanToInt(std::string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
            case 'I':
                switch (s[i + 1]) {
                case 'V':
                    result += 4;
                    i++;
                    break;
                case 'X':
                    result += 9;
                    i++;
                    break;
                default:
                    result += 1;
                }
                break;
            case 'X':
                switch (s[i + 1]) {
                case 'L':
                    result += 40;
                    i++;
                    break;
                case 'C':
                    result += 90;
                    i++;
                    break;
                default:
                    result += 10;
                }
                break;

            case 'C':
                switch (s[i + 1]) {
                case 'D':
                    result += 400;
                    i++;
                    break;
                case 'M':
                    result += 900;
                    i++;
                    break;
                default:
                    result += 100;
                }
                break;

            case 'V':
                result += 5;
                break;

            case 'L':
                result += 50;
                break;

            case 'D':
                result += 500;
                break;

            case 'M':
                result += 1000;
                break;
            }
        }
        return result;
    }
};

int main() { return 0; }