class Solution {
public:
    void backtrack(int start, int n, int k, vector<vector<int>>& result,vector<int>& current){
        if(current.size()== k){
            result.push_back(current);
            return;
        }

        for(int i = start; i<=n; i++){
            current.push_back(i);
            backtrack(i+1,n, k, result,current);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        if(n ==1 ){
            return {{1}};
        }
        vector<int> current;
        backtrack(1, n, k, result,current);
        return result;
    }
};