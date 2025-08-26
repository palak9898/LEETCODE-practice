class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int maxdiagonal = INT_MIN;
        int maxarea = INT_MIN;

        for(int i=0;i<n ;i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            int diagonal_length = length*length + width*width;
            int area = length * width;
            if(maxdiagonal < diagonal_length){
                maxdiagonal = diagonal_length;
                maxarea = length * width;
            }else if(maxdiagonal == diagonal_length && maxarea < area ){
                maxarea = area;
            }
        }
        return maxarea;
    }
};