class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res=0;
        for(int num:nums){
            int count=0;
            int sum=0;
            for(int j=1;j<=num;j++){
                if(num%j==0){
                    count++;
                    sum+=j;
                }
                if(count>4){
                    break;
                }
            }
            if(count==4){
                res+=sum;
            }
        }
        return res;
    }
};
