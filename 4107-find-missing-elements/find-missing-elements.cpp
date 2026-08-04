class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        
        unordered_set<int> mp;

        vector<int> arr;

        int st = INT_MAX;
        int end = INT_MIN;
       

       for(int i =0; i<n; i++){
          st = min(st,nums[i]);
          end = max(end, nums[i]);
       }
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