class Solution {
public:
    bool isPalindrome(string s) {
        string _s="";
        for(auto i:s) {
            if(i>='A' and i<='Z')
                _s+=(char)(i+32);
            else if((i>='a' and i<='z') or (i>='0' and i<='9'))
                _s+=i;
        }
        string s1 = _s;
        reverse(_s.begin(),_s.end());
        
        return (_s==s1);
    }
};