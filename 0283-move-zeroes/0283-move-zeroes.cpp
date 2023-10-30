class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        int max = nums.size();
        
        for(int i = 0; i< max; i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[p]);
                p++;
            }
            
        }
    }
};