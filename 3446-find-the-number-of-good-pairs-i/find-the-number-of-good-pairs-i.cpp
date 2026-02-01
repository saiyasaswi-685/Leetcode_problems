class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int c=0;
        for(int i =0; i < nums1.size(); i++)
        {   
            for(int j =0 ; j <nums2.size() ; j++)
            {
                int l = nums2[j] *k;
                if(nums1[i] % l ==0)
                c++;
            }
        }
        return c;
    }
};