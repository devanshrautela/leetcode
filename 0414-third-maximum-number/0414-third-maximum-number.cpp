class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>done;
        done.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            int count=nums[i-1];
            if(done.back()!=nums[i]) done.push_back(nums[i]);
            else continue;
        }
        if(done.size()<3) return done.back();
        else return done[done.size()-3];
    }
};