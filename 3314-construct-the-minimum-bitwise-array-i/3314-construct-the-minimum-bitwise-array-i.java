class Solution {
    public int[] minBitwiseArray(List<Integer> nums) {

    int n = nums.size();
    int[] ans = new int[n];

    for (int i = 0; i < n; i++) {

        int x = nums.get(i);

        if (x == 2) {
            ans[i] = -1;
            continue;
        }

        int candidate = Integer.MAX_VALUE;

        for (int bit = 0; bit < 31; bit++) {
            if ((x & (1 << bit)) != 0) {
                int temp = x ^ (1 << bit);

                if ((temp | (temp + 1)) == x) {
                    candidate = Math.min(candidate, temp);
                }
            }
        }

        ans[i] = (candidate == Integer.MAX_VALUE) ? -1 : candidate;
    }

    return ans;
}

}