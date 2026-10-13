class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pr;

        for (int num : nums) {
            pr.push(num);
        }

        while (k > 1) {
            pr.pop();
            k--;
        }

        return pr.top();
    }
};