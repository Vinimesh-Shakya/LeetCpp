class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        string a="";
        if(s[n]==' ')
        {
            while(s[n]==' ')
            {
                n--;
            }
        }
        while(n>=0&&s[n]!=' ')
        {
            a.push_back(s[n]);
            n--;
        }
        return a.length();
    }
};

/*
0ms 100% 8.94Mb 31.87%
Testcases:
s = "Hello World" out = 5
s = "   fly me   to   the moon  " out = 4
s = "luffy is still joyboy" out = 6
*/
