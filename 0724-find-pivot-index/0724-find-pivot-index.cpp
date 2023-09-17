class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0, left=0;
        for(int num : nums){
            totalSum += num;
        }
        for(int i=0; i<nums.size(); i++){
            totalSum-=nums[i];
            if(left==totalSum) return i;
            left+=nums[i];
        }
        return -1;
    }
};