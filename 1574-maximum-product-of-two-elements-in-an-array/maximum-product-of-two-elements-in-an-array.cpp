class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                      
                    if(i != j){
                      int digit = (nums[i] - 1)*(nums[j] -1);
                    
                      res = max(res,digit);
                    }
            }
        }

        return res;
    }
};