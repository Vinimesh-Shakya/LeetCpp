class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i=i-1;
            }
        }
        return nums.size();
    }
};

/*
0ms 100% 10.78Mb 100%
Testcases:
nums = [3,2,2,3] val = 3 out = [2,2]
nums = [0,1,2,2,3,0,4,2] val = 2 out = [0,1,3,0,4]
*/
