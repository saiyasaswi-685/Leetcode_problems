class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int big = nums[0];
        int pos = 0;

    
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > big) {
                big = nums[i];
                pos = i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i == pos) {
                
            }
            else {
                if (big >= 2 * nums[i]) {
                 
                }
                else {
                    return -1;   
                }
            }
        }

        return pos;
    }
};
