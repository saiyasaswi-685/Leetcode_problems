class Solution {
    public int findNumbers(int[] nums) {
         int count  =0;
         for(int i =0 ; i < nums.length; i++)
         {
            int res= nums[i];
            int digit = String.valueOf(res).length();
             if (digit %2 ==0)
                {
                    count ++;
                }
            }
         
         return count;
    }
}