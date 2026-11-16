class Solution {
public:
   string sum(string next){
    int add = 0;
    for(int i =0; i<next.size(); i++){
        add += next[i] - '0';
    }
    
    return to_string(add);
   }
    string digitSum(string s, int k) {
        int n = s.length();
     
     if( n <= k) return s; // base case
      string next = "";// resultant String  jo ki banti jab tu sare operation
     for(int i = 0 ; i< n; i+=k){
        string sub = s.substr(i , k);//substring
        next+=sum(sub);
        //cout<< sub<<endl;
     }
     return digitSum(next,k);//recursion call
    }
};