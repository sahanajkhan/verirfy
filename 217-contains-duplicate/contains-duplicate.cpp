class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int>newstore;

        for(int i =0; i<nums.size(); i++){
          if(newstore.count(nums[i]) > 0){
            return true;
          }
            newstore.insert(nums[i]);
          

        
        }
       
       
    return false;
    }
};