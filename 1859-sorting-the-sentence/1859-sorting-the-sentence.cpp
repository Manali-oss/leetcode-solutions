class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);

        for (int i = 0; i < s.size();) {
            string m = "";

            while (i < s.size() && s[i] != ' ') {
                m += s[i];
                i++;
            }

            int pos = m[m.size() - 1] - '0';
            m.pop_back();
            v[pos] = m;

            i++;
        }

        string ans = "";

        for (int i = 1; i < 10; i++) {
            if (v[i] != "") {
                if (ans != "") {
                    ans += " ";
                }
                ans += v[i];
            }
        }

        return ans;
    }
};