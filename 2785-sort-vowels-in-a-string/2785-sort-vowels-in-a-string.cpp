class Solution {
public:
    string sortVowels(string s) {
        vector<int> up(26, 0);
        vector<int> low(26, 0);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                up[s[i] - 'A']++;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                low[s[i] - 'a']++;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {

                if (up['A' - 'A'] > 0) {
                    s[i] = 'A';
                    up['A' - 'A']--;
                }
                else if (up['E' - 'A'] > 0) {
                    s[i] = 'E';
                    up['E' - 'A']--;
                }
                else if (up['I' - 'A'] > 0) {
                    s[i] = 'I';
                    up['I' - 'A']--;
                }
                else if (up['O' - 'A'] > 0) {
                    s[i] = 'O';
                    up['O' - 'A']--;
                }
                else if (up['U' - 'A'] > 0) {
                    s[i] = 'U';
                    up['U' - 'A']--;
                }
                else if (low['a' - 'a'] > 0) {
                    s[i] = 'a';
                    low['a' - 'a']--;
                }
                else if (low['e' - 'a'] > 0) {
                    s[i] = 'e';
                    low['e' - 'a']--;
                }
                else if (low['i' - 'a'] > 0) {
                    s[i] = 'i';
                    low['i' - 'a']--;
                }
                else if (low['o' - 'a'] > 0) {
                    s[i] = 'o';
                    low['o' - 'a']--;
                }
                else if (low['u' - 'a'] > 0) {
                    s[i] = 'u';
                    low['u' - 'a']--;
                }
            }
        }

        return s;
    }
};