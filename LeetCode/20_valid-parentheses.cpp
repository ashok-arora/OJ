#include <algorithm>
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

class Solution {
  public:
    // Using stack
    static bool isValid(std::string const &s) {

        if (count(s.begin(), s.end(), '(') != count(s.begin(), s.end(), ')'))
            return false;
        if (count(s.begin(), s.end(), '{') != count(s.begin(), s.end(), '}'))
            return false;
        if (count(s.begin(), s.end(), '[') != count(s.begin(), s.end(), ']'))
            return false;

        std::stack<int> stk;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{')
                stk.push(c);
            if (c == ')') {
                if (stk.top() == '(')
                    stk.pop();
                else
                    return false;
            }
            if (c == ']') {
                if (!stk.empty() && stk.top() == '[')
                    stk.pop();
                else
                    return false;
            }
            if (c == '}') {
                if (!stk.empty() && stk.top() == '{')
                    stk.pop();
                else
                    return false;
            }
        }
        return true;
    }

    // using vector with reserve and unordered_map
    static bool isValid2(std::string const &s) {
        if (0 == s.length())
            return true;

        std::vector<char> stack;
        stack.push_back(s[0]);
        std::unordered_map<char, char> left_to_right = {{'{', '}'}, {'[', ']'}, {'(', ')'}};
        for (int i = 1; i < s.length(); i++) {
            if (left_to_right[stack.back()] == s[i])
                stack.pop_back();
            else
                stack.push_back(s[i]);
        }
        if (stack.empty())
            return true;
        else
            return false;
    }

    // using stack and map
    static bool isValid3(std::string const &s) {
        if (s.length() == 0)
            return true;
        std::stack<char> sk;
        sk.push(s[0]);
        std::unordered_map<char, char> pairing = {{'{', '}'}, {'[', ']'}, {'(', ')'}};
        for (int i = 1; i < s.length(); i++) { // = s.begin()+1 ; c != s.end(); c++){
            if (s[i] == pairing[sk.top()])
                sk.pop();
            else
                sk.push(s[i]);
        }
        if (sk.empty())
            return true;
        else
            return false;
    }
};