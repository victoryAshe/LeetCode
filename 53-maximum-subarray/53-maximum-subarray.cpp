class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    int sum, great;
    sum = great= nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];
        
        nums[i] = max(nums[i], nums[i-1] + nums[i]);
        great = max(great, nums[i]);
    }

    return max(sum, great);
    }
};