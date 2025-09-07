class Solution {
    public String triangleType(int[] num) {
        int a = num[0];
        int b = num[1];
        int c = num[2];

        
        if (a + b <= c || a + c <= b || b + c <= a) {
            return "none";
        }

      
        if (a == b && b == c) {
            return "equilateral";
        }

        
        if (a == b || b == c || a == c) {
            return "isosceles";
        }

   
        return "scalene";
    }
}
