class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
         int even = (nums.size() + 1)/2;
        
        
        priority_queue<int> pq;

        for(int i =0; i<nums.size(); i++){
            pq.push(abs(nums[i]));
        }

        long long sum =0;

        while(even > 0){
            long long n = pq.top();
            pq.pop();
            sum += n * n;
            even--;
        }

        while(!pq.empty()){
            long long n = pq.top();
            pq.pop();
            sum -= n *n;
        }

        return sum;
    }
};