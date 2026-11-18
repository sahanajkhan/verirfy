class Solution {
public:
    int minChanges(string s) {
        

        int n = s.size();
        int cnt  = 0;
       // string  next = "";
        

        for(int i =0; i<=n-2; i+=2){

           //next = s.substr(i,2); 

           if(s[i] != s[i+1]){
            cnt++;
           }
            

        }

        return cnt;
    }
};