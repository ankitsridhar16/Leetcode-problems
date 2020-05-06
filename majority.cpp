//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.


class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int> res; 
    for(int i = 0; i < nums.size(); i++) 
        res[nums[i]]++; 
    int count = 0,ans; 
    for(auto i : res) 
    { 
        if(i.second > (nums.size() / 2)) 
        { 
            count =1; 
            ans = i.first; 
            break; 
        } 
    }
    return ans;
    if(count == 0) 
        return -1;
           
    }
};