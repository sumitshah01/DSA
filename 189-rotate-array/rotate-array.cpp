class Solution {
public:
    void rev(vector<int>& nums, int start, int end) {
        while (start <= end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0) return;

        k = k % n;

        if (k == 0) return;

        // Step 1: Reverse the entire array
        rev(nums, 0, n - 1);

        // Step 2: Reverse the first k elements
        rev(nums, 0, k - 1);

        // Step 3: Reverse the remaining elements
        rev(nums, k, n - 1);
    }
};