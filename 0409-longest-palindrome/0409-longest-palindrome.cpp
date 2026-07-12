class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()<2)return 1;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int count=0;
        int flag=0;
        for(auto it:m)
        {
            if(it.second%2==0)
            {
                count+=it.second;
            }
            else
            {
                count+=it.second-1;
                flag=1;
            }
        }
        return count+flag;
    }
};