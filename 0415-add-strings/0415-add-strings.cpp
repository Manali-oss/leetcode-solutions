class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size(), m = num2.size();
        int i = n - 1, j = m - 1;
        string totalsum = "";
        int carry = 0;

        while (i >= 0 && j >= 0)
        {
            int n1 = num1[i] - '0';
            int n2 = num2[j] - '0';
            int sum = n1 + n2 + carry;

            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            else
            {
                carry = 0;        // ✅ Correction 1: Reset carry when sum <= 9
            }

            string ans = to_string(sum);
            totalsum += ans;

            i--;
            j--;
        }

        while (i >= 0)
        {
            int n1 = num1[i] - '0';
            int sum = n1 + carry;

            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            else
            {
                carry = 0;        // ✅ Correction 2: Reset carry
            }

            string ans = to_string(sum);
            totalsum += ans;

            i--;
        }

        while (j >= 0)
        {
            int n2 = num2[j] - '0';
            int sum = n2 + carry;

            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            else
            {
                carry = 0;        // ✅ Correction 3: Reset carry
            }

            string ans = to_string(sum);
            totalsum += ans;

            j--;
        }

        if (carry != 0)
        {
            totalsum += to_string(carry);   // ✅ Correction 4: Append character/string, not integer
        }

        reverse(totalsum.begin(), totalsum.end());

        return totalsum;
    }
};