class Solution {
public:
    int reverse(int x) {
        if (abs(x)>pow(2,31))
        return 0;
        else
        {
            int y=abs(x);
            double r = 0;
            while(y>0)
            {
                r = r*10+(y%10);
                y=y/10;
            }
            if (r>pow(2,31))
            return 0;
            else
            return x>0? r:(-1)*r;
        }
    }
};

/*
0ms 100% 8.73 97.57%
Testcases:
x= 123 out = 321
x= -123 out = -321
x= 120 out = 21
*/
