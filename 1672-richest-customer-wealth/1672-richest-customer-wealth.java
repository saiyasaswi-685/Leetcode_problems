class Solution {
    public int maximumWealth(int[][] accounts) {
       int maxwealth=  0;
       for(int i=0 ;i<accounts.length; i++)
       {
        int localwealth=0;
        for (int j=0; j< accounts[i].length;j++)
        {
            localwealth = localwealth + accounts[i][j];
              if(localwealth > maxwealth)
              {
                maxwealth = localwealth;
              }
        }
       
       }
        return maxwealth;
        
    }
}