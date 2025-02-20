class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> S, T;
        for(int i = 0; i< s.size(); i++){
            S[s[i]]++;
            T[t[i]]++;
        }
        for(int i = 0; i< s.size(); i++){
            if(S[s[i]] != T[s[i]]) return false;
        }
        return true;
    }
};