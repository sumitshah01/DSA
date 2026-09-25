class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digitscount = 0;

            while (num != 0) {
                num = num / 10;
                digitscount++;
            }

            if (digitscount % 2 == 0) {
                evencount++;
            }
        }

        return evencount;
    }
};