class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());

        vector<int> array;
       int st = nums[0];
       int end = nums[n-1];



        for(int i = st; i <= end;i++){
            bool seen = false;
            
            for(int j =0; j < n;j++){
                //ye cheack karna hain ki next element present hain ya nhi 

              if(nums[j] == i){
               seen = true;
               break;
              }
            

        }
        if(seen == false){
            array.push_back(i);
        }

        }

        return array;
    }
};