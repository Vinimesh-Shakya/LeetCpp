class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> freq;
        for(char ind:s)
        {
            freq[ind]++;
            if(freq[ind]>1)
            return ind;
        }
        return ' ';
    }
};

/*
0ms 100% 7.67 100%
Testcases:
s = "abccbaacz" out = 'c'
s = "abcdd" out = 'd'
*/
