class Solution {
public:
    bool isPerfectSquare(int num) {
        int flag = 1;
        while(num>0)
        {
            num -= flag;
            flag += 2;
            if(!num)
                return true;
        }
        return false;
    }
};