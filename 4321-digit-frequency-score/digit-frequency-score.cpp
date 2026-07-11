class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum =0;
       while(n>0)
       {
      int  tem= n%10;
        sum = sum+tem;
        n = n/10;

       }
        return sum;
        
    }
};