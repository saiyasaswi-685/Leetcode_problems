class Solution {
    public int distributeCandies(int n, int limit) {
        int c =0;
       for (int x =0 ; x <=limit; x++)
       {
          for(int y= 0 ; y<=limit; y++)
          {
            int z = n-(x+y);
            if(z >=0 && z <= limit)
            {
                c ++;
            }
          }
       }
       return c;
    }
}
    
