class Solution {
private:
    static const int MAX = 10000001;
    
    bool check(vector<int>& candies, long long k, int value) {
        long long sum = 0;
        for (int candy : candies) {
            sum += (long long)candy / value;
        }
        return sum >= k;
    }
    
    int binSearch(vector<int>& candies, long long k, int left, int right) {
        if (left >= right) return right;
        
        int mid = left + (right - left) / 2;
        
        return check(candies, k, mid) 
            ? binSearch(candies, k, mid + 1, right) 
            : binSearch(candies, k, left, mid);
    }

public:
    int maximumCandies(vector<int>& candies, long long k) {
        return binSearch(candies, k, 1, MAX) - 1;
    }
};