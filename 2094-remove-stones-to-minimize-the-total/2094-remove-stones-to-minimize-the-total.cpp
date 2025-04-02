class Solution {
public:

int minStoneSum(vector<int>& piles, int k) {
    priority_queue<int> pq;
    int n = piles.size();

    for(int i = 0; i < n; i++) {
        pq.push(piles[i]);
    }

    for(int i = 0; i < k; i++) {
        int maxE = pq.top();
        pq.pop();
        maxE -= floor(maxE / 2);  
        pq.push(maxE);
    }
    int sum = 0;
    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }

    return sum;
}
};