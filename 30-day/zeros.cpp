//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int result;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0)
                nums[result++] = nums[i];
        for(int i=result;i<nums.size();i++)
            nums[i]=0;
    }
};