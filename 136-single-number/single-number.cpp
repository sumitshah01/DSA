class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int nums:nums){
            result=result^nums;
        }
        return result;
    }
};