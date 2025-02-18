class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i = n-1;
        while(i>=0){
            int val = num[i] - '0';
            if(val%2 == 1){
                return num.substr(0,i+1);
            }
            i--;
        }
        return "";
    }
};