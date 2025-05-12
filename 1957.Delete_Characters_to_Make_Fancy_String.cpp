class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3)
        return s;
        else
        {
            string ans = "";
            ans=ans+s[0];
            for(int i=1;i<s.size();i++)
            {
                if(s[i-1]==s[i]&&s[i]==s[i+1])
                continue;
                ans.push_back(s[i]);
            }
            return ans;
        }
    }
};

/*
36ms 27.85% 42.85Mb 82.09%
Testcases:
s = "leeetcode" out = "leetcode"
s = "aaabaaaa" out = "aabaa"
s = "aab" out = "aab"
*/
