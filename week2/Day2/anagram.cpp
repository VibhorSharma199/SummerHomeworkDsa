class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
    if (p.size() > s.size())
      return {};
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);
    vector<int> ans;
    for (auto it : p) {
      freq1[it - 'a']++;
    }
    for (int i = 0; i < p.length(); i++) {
      freq2[s[i] - 'a']++;
    }
    if (freq1 == freq2)
      ans.push_back(0);
    for (int right = p.length(); right < s.length(); right++) {
      freq2[s[right] - 'a']++;
      freq2[s[right - p.size()] - 'a']--;
      if (freq1 == freq2)
        ans.push_back(right - p.size() + 1);
    }
    return ans;
  }
};