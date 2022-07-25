
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        int great = -3 *pow(10,4);
        int minS = 3*pow(10,4);
        
        //vector<int> minNum = nums;
        int minNum = nums[0];
        int sum = nums[0];
        
        for(int i = 1; i<nums.size(); i++)
        {
            sum+=nums[i];
            
            minNum = min(nums[i], nums[i]+minNum);
            minS = min(minS,minNum);
            
            nums[i] = max(nums[i], nums[i]+nums[i-1]);
            great = max(great, nums[i]);
            
        }
        
        if(minS==sum) return great;
        else sum-=minS;
        
        return max(sum, great);
        
    }
};