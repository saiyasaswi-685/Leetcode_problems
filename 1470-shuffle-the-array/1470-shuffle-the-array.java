class Solution {
    public int[] shuffle(int[] nums, int n) {

        int ans [] = new int [nums.length];
        int in=0;
        int j =n;

        for(int i =0 ; i <n; i++)
        {
            ans[in++] = nums[i];
            ans[in++] =nums[j++];
        }
        return ans;
    }
}