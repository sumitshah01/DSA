class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int idx=-1;
        int max1=-1;
        int max2=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
                idx=i;
            }else if(nums[i]>max2){
                max2=nums[i];
            }
        }
        return max1>=(2*max2)?idx:-1;
    }
};