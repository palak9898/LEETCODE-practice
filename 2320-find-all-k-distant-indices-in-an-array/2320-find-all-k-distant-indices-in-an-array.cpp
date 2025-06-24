class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        unordered_map <int,int> mp;
        vector<int> arr;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                arr.push_back(i);
            }
        }
        int j=0;
        int n1 = arr.size();
        while (j < n1) {
            for (int i = 0; i < n; i++) {
                if (abs(i - arr[j])<=k){
                    result.push_back(i);
                }

            }
            j++;
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }

};