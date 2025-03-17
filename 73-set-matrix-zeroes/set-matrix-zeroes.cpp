class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> p;
        int n = matrix.size();
        if(n == 0) return;
        int m = matrix[0].size();
        for(int i = 0; i< n; i++){
            for(int j = 0; j< m; j++){
                if(matrix[i][j] == 0){
                    p.push_back({i,j});
                }
            }
        }
        for(auto it:p){
            for(int j = 0; j< m; j++){
                matrix[it.first][j] = 0;
            }
            for(int i =0; i< n; i++){
                matrix[i][it.second] = 0;
            }
        }
        return;
    }
};