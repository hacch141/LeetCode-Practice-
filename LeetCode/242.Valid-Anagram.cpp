// 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v(26);
        
        for(int i=0; i<s.length(); i++) {
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0; i<v.size(); i++) {
            if(v[i]) {
                return false;
            }
        }
        return true;
    }
};
