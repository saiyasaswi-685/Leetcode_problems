class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List <Integer> res = new ArrayList<>();
        for(int i =left ; i <= right ; i++)
        {
        if(isselfdevide(i))
        {
            res.add(i);
        }
        
        
    }
    return res;
    }

    private boolean isselfdevide( int num)
    {
        int temp = num;
        while(num >0)
        {
        int digit = num%10;
        if(digit ==0 || temp%digit !=0)
        {
            return false;
        }
        num = num/10;
       
    }
     return  true;
    }
 
}