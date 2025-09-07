class Solution {
    public int findClosest(int x, int y, int z) {
        int k = Math.abs(x-z);
        int u = Math.abs(y-z);
        if(k<u)
        {
            return 1;
        }
        else if (k >u)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
}