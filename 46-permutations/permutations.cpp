class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>combination;


 sort(nums.begin(), nums.end());

        do {
           
            combination.push_back(nums);

        } while (next_permutation(nums.begin(), nums.end()));






        return combination;
    }
};