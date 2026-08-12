class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];
        int start = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        while (start != slow) {
            slow = nums[slow];
            start = nums[start];
        }

        return slow;
    }
};