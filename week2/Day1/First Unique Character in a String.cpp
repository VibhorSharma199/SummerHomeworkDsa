class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(auto it:s){
            freq[it - 'a']++;
        }
        int ans=-1;
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a'] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};