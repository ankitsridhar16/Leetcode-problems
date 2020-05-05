/**Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.**/

//kadanes algo with negative case!


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0 , curr = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            curr = max(curr,sum);
            if (sum<0)
                sum = 0;
        }
        return curr;
    }
};