class Solution {
public:
    int findClosest(int x, int y, int z) {
        int max1 = abs(x-z);
        int max2 = abs(z-y);

        if(max1> max2){
            return 2;
        }
        else if(max1 < max2){
            return 1;
        }
        return 0;
    }
};