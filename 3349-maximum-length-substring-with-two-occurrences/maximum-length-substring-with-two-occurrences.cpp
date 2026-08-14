class Solution {
public:
    int maximumLengthSubstring(string s) {
       
       int  maxa = 0;

        for(int i =0; i<s.size(); i++){

            unordered_map<char,int>mp;
            for(int j =i; j<s.size(); j++){
                mp[s[j]]++;
            

            if(mp[s[j]] > 2) break;


            int ans = j -i +1;
                

            maxa = max(ans,maxa);
        }
        }

        return maxa;
    }
};