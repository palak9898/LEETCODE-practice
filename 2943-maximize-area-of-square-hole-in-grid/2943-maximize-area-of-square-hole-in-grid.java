class Solution {
    public int maximizeSquareHoleArea(int n, int m, int[] hBars, int[] vBars) {
        int maxH = longestConsecutive(hBars) + 1;
        int maxV = longestConsecutive(vBars) + 1;

        int side = Math.min(maxH, maxV);
        return side * side;
    }
    private int longestConsecutive(int[] bars) {
        if (bars == null || bars.length == 0) {
            return 0;
        }

        Arrays.sort(bars);

        int longest = 1;
        int current = 1;

        for (int i = 1; i < bars.length; i++) {
            if (bars[i] == bars[i - 1] + 1) {
                current++;
            } else {
                longest = Math.max(longest, current);
                current = 1;
            }
        }

        return Math.max(longest, current);
    }
}