/**
 * You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.
 * */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len == 1)
            return nums[0];
        int start = 0;
        int end = len - 1;
        while(start < end){
            int mid = ((start + end)/2 + 1)/2 * 2 - 1;
            if(nums[mid] != nums[mid+1]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return nums[start];
        
    }
};
