class Solution {
public:
    string sortVowels(string s) {
        vector<int> up(26, 0);
        vector<int> low(26, 0);

        // Count frequencies
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                up[s[i]-'A']++;
            }
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                low[s[i]-'a']++;
            }
        }

        // Order of vowels
        vector<int> pos = {0, 4, 8, 14, 20};

        int u = 0, l = 0;

        // Replace vowels
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
                s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                // Find the smallest available uppercase vowel
                while (u < 5 && up[pos[u]] == 0)
                    u++;

                if (u < 5)
                {
                    s[i] = char(pos[u] + 'A');
                    up[pos[u]]--;
                }
                else
                {
                    // All uppercase vowels are used, now use lowercase
                    while (l < 5 && low[pos[l]] == 0)
                        l++;

                    s[i] = char(pos[l] + 'a');
                    low[pos[l]]--;
                }
            }
        }

        return s;
    }
};