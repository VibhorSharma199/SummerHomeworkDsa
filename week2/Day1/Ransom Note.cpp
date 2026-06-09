class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.length() < ransomNote.length()) return false;
        unordered_map<int,int> mpr;
        unordered_map<int,int> mpm;
        for(auto it: ransomNote){
            mpr[it-'a']++;
        }
        for(auto it: magazine){
            mpm[it-'a']++;
        }
        for(auto &it:mpr){
            if(mpm[it.first] < it.second) return false;
        }
        return true;

    }
};