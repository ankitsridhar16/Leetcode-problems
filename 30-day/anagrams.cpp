//Given an array of strings, group anagrams together.



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>res;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            res[str].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for (auto it = res.begin(); it != res.end(); it++)
            ans.push_back(it->second);
        
        return ans;
    }
};