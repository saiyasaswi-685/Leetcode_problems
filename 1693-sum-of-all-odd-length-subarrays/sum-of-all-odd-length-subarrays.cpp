class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int total =0;
        for(int i =0 ; i < arr.size();i++)
        {
           int current =0;
           for( int j=i; j < arr.size (); j++)
           {
             current += arr[j];
             int len = j -i +1;
             if( len %2 ==1)
             total += current;
           }
        }
        return total;
    }
};