class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int left = 0;
        int right = n -1;
        int sum =0;
        int res = 0;

        for(int i =0; i<k; i++){

            sum += cardPoints[left];
            left++;

        }
        left--;


        res = max(res, sum);




        for(int i =0; i<k; i++){
             
             sum -= cardPoints[left];
             sum += cardPoints[right];


             res = max(res,sum);
             left--;
             right--;


        }

    return res;

    }
};