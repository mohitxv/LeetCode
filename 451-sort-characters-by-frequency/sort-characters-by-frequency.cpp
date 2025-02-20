class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i =0; i< s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](auto& a, auto& b){
            return a.second > b.second;
        });
        string ans = "";
        for(auto it: vec){
            ans.append(it.second, it.first);
        }
        return ans;
    }
};