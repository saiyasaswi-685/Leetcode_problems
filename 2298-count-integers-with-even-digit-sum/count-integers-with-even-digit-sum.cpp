class Solution {
public:
    int countEven(int num) {
        int k =0 , n =num;
        while(n>0)
        {
            k += n%10;
            n = n/10;
        }
        if(k%2==0) return num/2;
        else return( num-1)/2;
    }
};