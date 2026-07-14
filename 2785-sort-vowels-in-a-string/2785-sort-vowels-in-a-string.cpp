class Solution {
public:
    string sortVowels(string s) {

        vector<int> freq(128, 0);
        string vowels = "AEIOUaeiou";

        // Count vowels
        for (int i = 0; i < s.size(); i++)
        {
            if (vowels.find(s[i]) != string::npos)
            {
                freq[s[i]]++;
            }
        }

        int j = 0;

        // Replace vowels in sorted order
        for (int i = 0; i < s.size(); i++)
        {
            if (vowels.find(s[i]) != string::npos)
            {
                while (freq[vowels[j]] == 0)
                {
                    j++;
                }

                s[i] = vowels[j];
                freq[vowels[j]]--;
            }
        }

        return s;
    }
};