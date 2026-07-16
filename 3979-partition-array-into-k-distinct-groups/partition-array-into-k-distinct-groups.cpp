class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        
        int n = nums.size();

        if(nums.size() % k != 0){
            return false;
        }


        int numGroups = n / k;
        std::unordered_map<int, int> freq;
        
        
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > numGroups) {
                return false;
            }
        }

        return true;
    }
};