class Solution {
public:
    long long countCommas(long long n) {

           
           long long cnt =0;

           for(long long p =1000; p<= n; p*=1000)
            cnt += n - p +1;
            return cnt;
           
           

        //return cnt;
    }
};



// esme ek series banegi jaise ki (n -999) + (n - 9999) + (n - 99999) + (n - 999999)....
// esme comman part ko commman karke nikal lo phir baki se ek gp banegi usme sum os gp ka formula lga kar count kar lenge then usk bad upar wala trick ya formula nikal kar aa jayega