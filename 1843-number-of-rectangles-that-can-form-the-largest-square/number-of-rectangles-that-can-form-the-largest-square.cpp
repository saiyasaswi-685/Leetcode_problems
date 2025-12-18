class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count =0;
        int maxvalue=0;
        for(int i =0 ; i < rectangles.size();i++)
        {
            int side = min(rectangles[i][0], rectangles[i][1]);
            if(maxvalue < side) 
            {maxvalue = side;
            count =1;
            }
            else if(maxvalue ==side) count++;
        }
        return count;
    }
};