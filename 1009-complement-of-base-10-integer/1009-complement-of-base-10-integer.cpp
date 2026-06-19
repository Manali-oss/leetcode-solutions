class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        string s = "";

        while(n)
        {
            int rem = n % 2;
            n /= 2;
            s += rem + '0';
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
        }

        int ans = 0;
        int k = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                ans += pow(2, k);
            }
            k++;
        }

        return ans;
    }
};