class Solution {
public:
    string common(string a,string b)
    {
        string r="";
        int max;
        if(a.size()>b.size())
        {
            max = a.size();
            for(int i=0;i<max;i++)
            {
                if(i>=b.size())
                return r;
                if(a[i]==b[i])
                r+=a[i];
                else
                break;
            }
        }
        else
        {
            max = b.size();
            for(int i=0;i<max;i++)
            {
                if(i>=a.size())
                return r;
                if(b[i]==a[i])
                r+=b[i];
                else
                break;
            }
        }
        return r;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0],temp = strs[0];
        for(int i=0;i<strs.size()-1;i++)
        {
            temp = common(strs[i+1],strs[i]);
            if(ans.length()>temp.length())
            {
                ans = temp;
            }
        }
        return ans;
    }
};


/*
0ms 100% 11.97Mb 50.82%
Testcases:
strs = ["flower","flow","flight"] out "fl"
strs = ["dog","racecar","car"] out = ""
"
*/
