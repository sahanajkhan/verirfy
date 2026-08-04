class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());

        unordered_set<int> mp;

        vector<int> arr;
       int st = nums[0];
       int end = nums[n-1];
        for(int i=0;i<n;i++){
           mp.insert(nums[i]);
        }

        for(int j = st; j<=end; j++){
            if(!mp.contains(j)){
                arr.push_back(j);
            }
        }

        

        return arr;
    }
};