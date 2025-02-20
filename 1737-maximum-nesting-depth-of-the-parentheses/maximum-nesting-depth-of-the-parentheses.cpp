class Solution {
public:
    int maxDepth(string s) {
        int dep = 0, maxDep = 0;
        for(auto it : s){
            if(it == '(') dep++;
            else if(it == ')') dep--;
            maxDep = max(dep, maxDep);
        }
        return maxDep;
    }
};