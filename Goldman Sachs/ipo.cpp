// Link: https://leetcode.com/problems/ipo/description/
// This is a greedy problem. We need to find the maximum profit we can get from the given capital and profits.
// We can do this by sorting the capital and profits in ascending order of capital. Then we can iterate over the profits and capital and keep adding the profits to the capital if the capital is less than the current capital. We can use a priority queue to keep track of the profits we can add to the capital. We can keep adding the profits to the capital until we have used all the profits or we have used k projects.
// Time complexity: O(nlogn)

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        priority_queue<int> q;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.emplace_back(capital[i], profits[i]);
        }
        sort(v.begin(), v.end());
      
        int ptr = 0;
        for (int i = 0; i < k; i++) {
            while (ptr < n && v[ptr].first <= w) {
                q.push(v[ptr++].second);
            }
            if (q.empty()) {
                break;
            }
            w += q.top();
            q.pop();
        }
        return w;
    }
};