class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                int pos = s[i] - '0';
                words[pos] = temp;
                temp = "";
            }
            else if (s[i] == ' ') {
                continue;
            }
            else {
                temp += s[i];
            }
        }

        string ans = "";

        for (int i = 1; i < 10; i++) {
            if (words[i] != "") {
                if (ans != "") {
                    ans += " ";
                }
                ans += words[i];
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};