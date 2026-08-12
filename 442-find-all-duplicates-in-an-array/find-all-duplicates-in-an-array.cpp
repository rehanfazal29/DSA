class Solution {
public:

    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {

            int number = abs(nums[i]);

            int index = number - 1;

            if (nums[index] < 0) {

                answer.push_back(number);
            }
            else {

                nums[index] = -nums[index];
            }
        }

        return answer;
    }
};