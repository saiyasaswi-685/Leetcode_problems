class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> pr;
        for( int gift : gifts)
        {
        pr.push(gift);
        }
       long long  sum =0;
        
        while(k --)
        {
        int lar = pr.top();
        pr.pop();
        pr.push(sqrt(lar));

        }

        while(!pr.empty())
        {
            sum += pr.top();
            pr.pop();
        }


        return sum;
        
    }
};