class Solution {
public:
    int mySqrt(int x) {
        return binarySearch(x);
    }

    int binarySearch(int x) {
        int start = 0;
        int end = x;
        int ans = -1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            long long square = 1LL * mid * mid;

            if (square == x) {
                return mid;
            }
            else if (square < x) {
                start = mid + 1;
                ans = mid;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};