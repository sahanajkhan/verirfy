class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();


        // ek left part main min  ko calculate or right part main se max ko calculate karna hain

        vector<int> right(n);
        right[n-1] = nums[n-1];

        for(int i = n-2; i>=0; i--){
           right[i] = min(right[i+1],nums[i]);
        }


        int left =  nums[0]; 

        for(int j=0; j<n; j++){
            left = max(left,nums[j]);


            int sc = left-right[j];

            if(sc <= k){
                return j;
            }
        }

       return -1;
       
           }
};