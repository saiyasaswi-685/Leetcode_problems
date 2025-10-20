import java.util.*;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxCandies = 0;
        
        // Step 1: Find the maximum number of candies
        for (int candy : candies) {
            if (candy > maxCandies) {
                maxCandies = candy;
            }
        }
        
        // Step 2: Create result list
        List<Boolean> result = new ArrayList<>();
        
        // Step 3: Check for each kid
        for (int candy : candies) {
            result.add(candy + extraCandies >= maxCandies);
        }
        
        return result;
    }
}
