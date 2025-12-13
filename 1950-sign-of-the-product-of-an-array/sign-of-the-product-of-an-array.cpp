class Solution {
public:
    int arraySign(vector<int>& nums) {
        int flag =1;
        for (int i =0 ; i < nums.size() ; i++)
        {
        if(nums[i] <0)  flag = - flag;
        else if (nums[i] ==0)
        { flag =0;
        break;
        }
    }
        
    
    return flag;
    }
};