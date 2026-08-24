class Solution {
public:
 static  bool campare(int a,int b){
    int bitcnta = __builtin_popcount(a);
    int bitcntb = __builtin_popcount(b);


    if(bitcnta == bitcntb){
        return a <b;
    }

    return bitcnta < bitcntb;
  }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), campare);

        return arr;
    }
};