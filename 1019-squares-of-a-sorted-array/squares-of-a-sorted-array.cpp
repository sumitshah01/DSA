class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int N = nums.size();
        
        vector<int> result(N);
        
        for (int i = 0; i < N; i++) {
            result[i] = nums[i] * nums[i];
        }
        
        sort(result.begin(), result.end());
        
        return result;
    }
};