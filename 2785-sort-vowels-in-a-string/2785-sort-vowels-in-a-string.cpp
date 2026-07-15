class Solution {
public:
    string sortVowels(string s) {

        int n = s.size();

        vector<int>small(5,0);
        vector<int>capital(5,0);

        for(int i = 0; i < n; i++){

            // CAPITAL LETTERS
            if(s[i] == 'A')capital[0]++;
            if(s[i] == 'E')capital[1]++;
            if(s[i] == 'I')capital[2]++;
            if(s[i] == 'O')capital[3]++;
            if(s[i] == 'U')capital[4]++;

            // SMALL LETTERS
            if(s[i] == 'a')small[0]++;
            if(s[i] == 'e')small[1]++;
            if(s[i] == 'i')small[2]++;
            if(s[i] == 'o')small[3]++;
            if(s[i] == 'u')small[4]++;

        }

        for(int i = 0; i < n; i++){

            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){

                if(capital[0] != 0)s[i] = 'A',capital[0] = capital[0]-1;
                else if(capital[1] != 0)s[i] = 'E',capital[1] = capital[1]-1;
                else if(capital[2] != 0)s[i] = 'I',capital[2] = capital[2]-1;
                else if(capital[3] != 0)s[i] = 'O',capital[3] = capital[3]-1;
                else if(capital[4] != 0)s[i] = 'U',capital[4] = capital[4]-1;
                else if(small[0] != 0)s[i] = 'a',small[0] = small[0]-1;
                else if(small[1] != 0)s[i] = 'e',small[1] = small[1]-1;
                else if(small[2] != 0)s[i] = 'i',small[2] = small[2]-1;
                else if(small[3] != 0)s[i] = 'o',small[3] = small[3]-1;
                else if(small[4] != 0)s[i] = 'u',small[4] = small[4]-1;

            }
        }
        return s;

    }
};