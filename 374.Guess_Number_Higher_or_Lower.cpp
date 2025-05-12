/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1,j=n,m;
        if(guess(j)==0)
        return j;
        HERE:
        m=i+(j-i)/2;
        if(guess(m)==0)
        return m;
        if(guess(m)==-1)
        j=m;
        if(guess(m)==1)
        i=m;
        goto HERE;
        
    }
};

/*
0ms 100% 7.98Mb 39.73%
Test cases:
n= 360685 pick= 274479
n= 150983 pick= 102181
n= 798665 pick= 638835
n= 2 pick= 2
n= 997953 pick= 384461
n= 177791 pick= 57420
n= 781837 pick= 216217
n= 358100 pick= 347032
*/
