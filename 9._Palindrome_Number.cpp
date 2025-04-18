/*
9. Palindrome Number

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?

*/

//Accepted  5ms  8.39Mb

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        else
        {
            long int rev=0,temp=x;
            while(temp!=0)
            {
                rev = rev*10 + (temp%10);
                temp /=10;
            }
            return (rev == x);
        }
    }
};

/*
Testcases: 
1. 121   true
2. -121  false
3. 10    false

*/
