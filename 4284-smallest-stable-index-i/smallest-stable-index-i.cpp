class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int maxa = INT_MIN;
            int mini = INT_MAX;

            
            for (int j = 0; j <= i; j++) {
                maxa = max(maxa, nums[j]);
            }

            
            for (int j = i; j < n; j++) {
                mini = min(mini, nums[j]);
            }

            int score = maxa - mini;

            if (score <= k) {
                return i;
            }
        }

        return -1;
    }
};