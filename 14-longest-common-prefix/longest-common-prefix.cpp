class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i =0, j = 0;
        for(i = 0; i < strs[0].size(); i++){
            for(j = 0; j< strs.size(); j++){
                if(strs[j][i] != strs[0][i]) return ans;
            }
            ans = ans + strs[0][i];
        }
        return ans;
    }
};