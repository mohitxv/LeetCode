class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        
        if(s.size() != goal.size()) return false;
        for(int i = 1; i < s.size(); i++){
            string a = s.substr(i);
            string b = s.substr(0, i);
            string ans = a + b;
            if(ans == goal) return true;
        }
        return false;
    }
};