class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>v1(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&& s[i]<='z')
            {
                v1[s[i]-'a']++;
            }
        }
        int count=0;
        int flag=0;
        for(int i=0;i<26;i++)
        {
            if(v1[i]%2==0)
            {
                count+=v1[i];
            }
            else
            {
                count+=v1[i]-1;
                 flag=1;
            }
        }
        vector<int>v2(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&& s[i]<='Z')
            {
                v2[s[i]-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(v2[i]%2==0)
            {
                count+=v2[i];
            }
            else
            {
                count+=v2[i]-1;
                flag=1;
            }
        }
        return count+flag;
    }
};