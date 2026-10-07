class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum = 0;

        // Find total sum
        for (int i = 0; i < nums.size(); i++) {
            rightsum += nums[i];
        }

        int leftsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // Remove current element from right side
            rightsum -= nums[i];

            // Check if left sum == right sum
            if (leftsum == rightsum) {
                return i;
            }

            // Add current element to left side
            leftsum += nums[i];
        }

        return -1;
    }
};