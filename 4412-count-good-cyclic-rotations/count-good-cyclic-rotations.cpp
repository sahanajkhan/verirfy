class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n / 2;
        int cnt = 0;

        long long totalSum = 0;

        for (int x : nums) {
            totalSum += x;
        }

       
            long long firstSum = 0;

            for (int i = 0; i < half; i++) {
                firstSum += nums[i];
            }

            

            for (int r = 0; r < n; r++) {

            long long secondSum = totalSum - firstSum;

            if (firstSum > secondSum) {
                cnt++;
            }

            firstSum -= nums[r];
            firstSum += nums[(r+half) % n];

            
        }

        return cnt;
    }
};