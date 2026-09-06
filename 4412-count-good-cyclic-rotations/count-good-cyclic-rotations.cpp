class Solution {
public:
    int countGoodRotations(vector<int>& nums) {

        int n = nums.size();

        int cnt =0;

        vector<int>shahanaj = nums;
        long long tsum =0;
        int half = n/2;
        long long firstsum =0;

        for(int x: nums){
             tsum += x;
        }


        for(int i =0; i<half;i++){
            firstsum += nums[i];

        }


        for(int j =0; j<n; j++){

            long long secondsum = tsum - firstsum;


            if(secondsum < firstsum){
                cnt++;
            }

            firstsum -= nums[j];
            firstsum += nums[(j+half) % n];
        }


        return cnt;
        
    }
};