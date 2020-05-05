//Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> res;
        for(auto i: s)
            res[i]++;
        for(int i=0;i<s.length();i++)
            if(res[s[i]]==1)
                return i;
        return -1;
    }
};