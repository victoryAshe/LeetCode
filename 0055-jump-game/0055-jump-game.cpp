class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cost = nums[0];
        
        for (int i = 1; i<nums.size(); i++)
        {
            if(cost>=i)
                cost = max(cost, nums[i]+i);
        }
        return cost>=nums.size()-1;
    }
};