// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1,j=n,c=i+(j-i)/2;
        if(isBadVersion(n)&&!isBadVersion(n-1))
        return n;
        while(true)
        {
            if(isBadVersion(c))
            {
                if(isBadVersion(c-1)==false)
                return c;
                else
                {
                    j=c;
                    c=i+(j-i)/2;
                }
            }
            else
            {
                i=c;
                c=i+(j-i)/2;
            }

        }
    }
};


/*
0ms 100% 7.85Mb 69%
Testcases:
n=5 b=4 out=4
n=1 b=1 out=1
n=2126753390 b=1000 out=1000
n=2126753390 b=1702766719 out=1702766719
n=1420736637 b=1150769282 out=1150769282
n=1150769282 b=131904690 out=131904690
n=2 b=2 out=2
*/



