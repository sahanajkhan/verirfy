class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin() , wordDict.end());
        
        int n =s.length();
        
        vector<int> dp(n+1, false);
        
        dp[0] = true;
        
        for(int i =0; i<=n; i++){
            for(int j =0; j<i; j++){
                string word = s.substr(j , i - j);
                
                
                if(dp[j] && dict.find(word) != dict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[n];
    }
};