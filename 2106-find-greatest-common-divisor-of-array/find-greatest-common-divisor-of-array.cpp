class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();

        int mini = nums[0];

        int maxi = nums[n-1];

        int result = gcd(mini , maxi);

        return result;
    }
};