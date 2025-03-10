/*
3151. Special Array I

Description:
An array is considered special if the parity of every pair of adjacent elements is different. In other words, one element in each pair must be even, and the other must be odd.

You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.

 

Example 1:

Input: nums = [1]

Output: true

Explanation:

There is only one element. So the answer is true.

Example 2:

Input: nums = [2,1,4]

Output: true

Explanation:

There is only two pairs: (2,1) and (1,4), and both of them contain numbers with different parity. So the answer is true.

Example 3:

Input: nums = [4,3,1,6]

Output: false

Explanation:

nums[1] and nums[2] are both odd. So the answer is false.

 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
*/


// Accepted:     0 ms     27.80 Mb


class Solution {
public:
    bool isEven(int a)
    {
        return (a&1)? false: true;
    }
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        for(int i=0,j=1;j!=nums.size();i++,j++)
        {
            if(isEven(nums[i])==isEven(nums[j]))
            return false;
        }
        return true;
    }
};




/*
Testcases: 

1. [1]  true
2. [2,1,4]  true
3. [4,3,1,6]  false
4. [6,4,8,8,2,4,2,4,8,2,2,4,4,6,5]  false
5. [10,31,60,89,16,85,82,39,24,53,46,53,18,33,64,1,48,15,98,33,8,3,16,81,94,31,64,13,32,43,10,37,82,49,66,67,84,63,72,81,54,77,64,57,68,1,30,11,86,95,10,97,72,13,36,85,6]  true
6. [54,59,76,63,12,63,12,83,28,45,98,43,88,61,62,75,84,33,18,61,30,87,52,27,84,35,36,17,62,39,64,19,10,15,62,23,6,99,50,23,58,61,96,95,50,55,72,87,40,91,40,73,32,11,80,51,60,15,38,87,16,27,80,87,82,49,56,93,70,75,2,95]  true
7. [46,21,72,13,78,17,46,87,26,19,76,91,66,17,34,3,46,67,56,97,42,7,42,45,8,57,54,13,10,5,2,51,94,67,58,31,2,73,74,67,50,29,40,45,36,79,44,49,70,69,78,1,86,89,20,35,60,61,90,97,82,41,30,31,2,97,22,21,34,93,70,5,46,19,62,79,34,5,26,61]  true

*/
