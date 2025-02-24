/*
11. Container With Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:
// Image reference: https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 10^4
*/

// Accepted:  vector 12ms 68.8Mb,   check-compare  0ms 61.7MB

//Vector
class Solution {
public:
    int min(int a, int b)
    {
        if(a>=b)
        return b;
        else
        return a;
    }
    int maxArea(vector<int>& height) {
        int max=0;
        vector<int> area;
        for(int i=0,j=height.size()-1;i<height.size();)
        {
            int t = min(height[i],height[j]);
            area.push_back(t*(j-i));
            if(t==height[i])
            i++;
            else
            j--;
        }
        for(int i=0;i<area.size();i++)
        {
            if(area[i]>max)
            max=area[i];
        }
        return max;
    }
};


// Check-Compare
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA=0,a=0,t=0;
        for(int i=0,j=height.size()-1;i<j;)
        {
            t = min(height[i],height[j]);
            a = t*(j-i);
            maxA = max(maxA,a);
            if(t==height[i])
            i++;
            else
            j--;
        }
        return maxA;
    }
};


/*
Testcases: 
1. [1,8,6,2,5,4,8,3,7]  o/p = 49
2. [1,1]  o/p = 1
*/
