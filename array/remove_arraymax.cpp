// Replace Elements with Greatest Element on Right Side
// Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// After doing so, return the array.

 

// Example 1:

// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]



class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    vector<int> ans(arr);
    int n = arr.size(); 
    ans[n-1] = -1;                                              
    int curr_max = -10; 
    for(int i=n-1;i>=1;i--)
    {
        if(curr_max < arr[i])                                 
        {
            curr_max = arr[i];
        }
        
        ans[i-1] = curr_max;                                  
    }    
    return ans;    
    }
};