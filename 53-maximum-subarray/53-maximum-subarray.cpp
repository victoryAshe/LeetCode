class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    int sum, maxNum, great;
    sum = maxNum = great= nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i];
        
        maxNum = max(nums[i], nums[i] + maxNum);
        great = max(great, maxNum);
    }

    return max(sum, great);
    }
};