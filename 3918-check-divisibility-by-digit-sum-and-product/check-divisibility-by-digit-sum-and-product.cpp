class Solution {
public:
    bool checkDivisibility(int n) {
        

        int disum = 0;
        int dipro = 1;
        int ori = n;
        

        while(n>0){
         

            disum += n % 10;
            dipro *= n % 10;
            n /= 10;
        }

       

     

       return  ori % (disum + dipro) == 0;
    }
};