class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> st ,ts;
        for(int i = 0; i< s.size(); i++){
            char c1 = s[i], c2 = t[i];

            if(st.count(c1) && st[c1] != c2)
              return false;

            if(ts.count(c2) && ts[c2] != c1)
              return false;

            st[c1] = c2;
            ts[c2] = c1;
        }
        return true;
    }
};