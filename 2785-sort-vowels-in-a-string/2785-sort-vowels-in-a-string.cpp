class Solution {
public:
    bool isVowel(char ch)
    {
        return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
               ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    string sortVowels(string s) {

        vector<int> freq(128, 0);
        string vowels = "AEIOUaeiou";

        // Count frequencies of vowels
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                freq[s[i]]++;
            }
        }

        int j = 0;

        // Replace vowels in sorted order
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
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