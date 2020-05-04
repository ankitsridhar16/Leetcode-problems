/** Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.**/
class Solution {
public:
    int findComplement(int num) {
        int x = floor(log2(num))+1;
        int y = pow(2,x)-1;
        return num^y; 
    }
};