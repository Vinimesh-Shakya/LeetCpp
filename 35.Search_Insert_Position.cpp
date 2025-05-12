class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            if (nums[nums.size()-1]<target)
            return nums.size();
            if(nums[0]>target)
            return 0;
            int i=0,j=nums.size()-1,c = (i+j)/2;
            while(true)
            {
                if(nums[c]==target)
                return c;
                if(i==c)
                return (c+1);
                if(nums[c]>target)
                {
                    j = c;
                    c = (i+j)/2;
                }
                else
                {
                    i = c;
                    c = (i+j)/2;
                }
            }
            
        }
    };


/*
0ms 100% 13.6Mb 76.21%
Test cases :
nums = [1,3,5,6] target = 5 Out = 2
nums = [1,3,5,6] target = 2 Out = 1
nums = [1,3,5,6] target = 7 Out = 4
nums = [1] target = 1 Out = 0

*/
