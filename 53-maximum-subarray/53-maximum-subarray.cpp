class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];

    int great = -1*pow(10, 4);

    int sum, maxNum;
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