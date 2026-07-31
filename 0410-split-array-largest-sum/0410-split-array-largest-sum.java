class Solution {
    public int splitArray(int[] nums, int k) {

        int start = 0;
        int end = 0;

        for (int i = 0; i < nums.length; i++) {
            start = Math.max(start, nums[i]);
            end = end + nums[i];
        }

        while (start < end) {

            int mid = start + (end - start) / 2;

            int sum = 0;
            int parts = 1;

            for (int i = 0; i < nums.length; i++) {

                if (sum + nums[i] > mid) {

                    parts++;
                    sum = nums[i];

                } else {

                    sum = sum + nums[i];
                }
            }

            if (parts > k) {
                start = mid + 1;
            }

            else {
                end = mid;
            }
        }

        return start;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna