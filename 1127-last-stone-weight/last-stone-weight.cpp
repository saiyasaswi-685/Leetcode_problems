
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for (int stone : stones) {
            pq.push(stone);
        }

        while (pq.size() > 1) {
            int fir = pq.top();
            pq.pop();

            int sec = pq.top();
            pq.pop();

            if (fir != sec) {
                pq.push(fir - sec);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
