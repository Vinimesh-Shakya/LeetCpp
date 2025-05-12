class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])
            {
                nums.erase(nums.begin()+(i+1));
                i=i-1;
            }
        }
        return nums.size();
    }
};

/*
47ms 5.23% 21.28Mb 100%
Testcases:
a = [1,1,2] o = [1,2]
a = [0,0,1,1,1,2,2,3,3,4] o = [0,1,2,3,4]
*/
