class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0;
        int j=0;
        int n = g.size();
        int m = s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        while(i<= n-1 && j<= m-1 ){
            if(s[j]>= g[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
};