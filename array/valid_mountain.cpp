// Valid Mountain Array

// Solution
// Given an array A of integers, return true if and only if it is a valid mountain array.

// Recall that A is a mountain array if and only if:

// A.length >= 3
// There exists some i with 0 < i < A.length - 1 such that:
// A[0] < A[1] < ... A[i-1] < A[i]
// A[i] > A[i+1] > ... > A[A.length - 1]

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size() < 3) 
        return false;
        else {
            for (int i = 0; i < A.size()-1; i++) {
                if (A[i] == A[i+1])
                    return false;
                if (i == 0 && A[i] > A[i+1])
                    return false;
                if (i > 0 && A[i-1] > A[i] && A[i] < A[i+1])
                    return false;
                if (i == (A.size()-2) && A[i] < A[i+1])
                    return false;
            }
            return true;
        }
        
    }
};