
class Solution {
public:
    bool detectCapitalUse(string word) {
        uint8_t count = 0;
        for(char c : word)
            if(isupper(c))
                ++count;
        return count==word.length() || count==0 || count==1 && isupper(word[0]) ;
    }
};