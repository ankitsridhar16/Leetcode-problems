/**
 * A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
 **/


class Solution {
public:
    bool isHappy(int n) {
        set<int> seen ;
        while(n!=1)
        {
            int sum = 0 , curr = n ;
            while(curr)
            {
                sum += (curr%10) * (curr%10);
                curr /= 10 ;
            }
            if(*seen.find(sum)!=seen.size())
                return false;
            seen.insert(sum);
            n = sum;
        }
        return true;
    }
};