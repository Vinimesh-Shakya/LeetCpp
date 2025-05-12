class Solution {
public:
    int check(char a){
        if (a == 'I')
        return 0;
        else if (a == 'V')
        return 1;
        else if (a == 'X')
        return 2;
        else if (a == 'L')
        return 3;
        else if (a == 'C')
        return 4;
        else if (a == 'D')
        return 5;
        else if (a == 'M')
        return 6;
        else 
        return 0;
    }
    int romanToInt(string s) {
        int num=0;
        int ar[7]={1,5,10,50,100,500,1000};
        for(int i=0;i<s.size();i++)
        {
            num+= ar[check(s[i])];
            if(check(s[i+1])>check(s[i]))
            num= num - 2*(ar[check(s[i])]);
        }
        return num;
    }
};

/*
1ms 79.29% 10.78Mb 71.92%
Testcases: 
s= "III" out = 3
s= "LVIII" out = 58
s= "MCMXCIV" out = 1994

*/
