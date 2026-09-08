class Solution {
public:
    int countCommas(int n) {

        if(n<1000) return 0;


        return n - 999;// 999 se jitna jyda hoga wahi toh answer hog
    }
};