class Solution {
  public:
    int lengthOfLastWord(string s) {
        int length = 0, start = 0, end = s.size();

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ')
                start++;
            else
                break;
        }

        for (int i = s.size() - 1; i > 0; i--) {
            if (s[i] == ' ')
                end--;
            else
                break;
        }

        for (int i = start; i < end; i++) {
            std::cout << s[i] << " ";
            if (s[i] != ' ')
                length++;
            else
                length = 0;
        }
        return length;
    }

    int lengthOfLastWord2(string s) {
        std::stringstream ss(s);
        string token;

        while (ss >> token);

        return token.size();
    }
};