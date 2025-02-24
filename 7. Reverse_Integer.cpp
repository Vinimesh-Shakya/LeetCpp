/*
  7. Reverse Integer
  Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
  
*/


// Accepted   0ms  8.37Mb

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
Testcases: 
1. 123  o/p = 321
2. -123  o/p = -321
3. 120  o/p = 21

*/
