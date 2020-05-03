/**
 * Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.
**/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size())
            return false;
        if(ransomNote.size()==0)
            return true;
        unordered_map<int,int> pool ;
        for(int i=0; i<magazine.size(); i++)
            pool[magazine[i]]++;
        for(int i=0;i<ransomNote.size();i++){
            pool[ransomNote[i]]--;
            if(pool[ransomNote[i]]<0)
                return false;
        }
        return true;
    }
};

// Improved 

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int> pool;
       for(char i : ransomNote)
           pool[i]++;
       for(char i : magazine)         
           pool[i]--;
       for(char i : ransomNote)
          if(pool[i] > 0)  
              return false;
       return true;
    }
};