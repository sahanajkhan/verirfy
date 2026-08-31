class Solution {
public:
    int minOperations(vector<int>& nums, int sum) {
        const int INF = 1e9;

        vector<int> dp(sum +1 , INF);

        dp[0] = 0;

        for(int x : nums){
            vector<pair<int,int>>opt;

            opt.push_back({x,0});

            int v =x,cost =0;

            while(v>1){
                v /= 2;
                cost++;
                if(v <= sum) opt.push_back({v,cost});
            }

            v  =x;
            cost = 0;
            while(v <= sum/2){
                v *= 2;
                cost++;
                opt.push_back({v,cost});
            }

            for(int s =sum; s>=0; s--){
                if(dp[s] == INF) continue;

                for(auto &[val,c] : opt){
                    if(s + val <= sum) 
                        dp[s + val] = min(dp[s+val] , dp[s]+c);
                }
            }
        }

        return dp[sum] == INF ? -1 : dp[sum];
    }
};