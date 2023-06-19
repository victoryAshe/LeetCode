class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyer-Moore Algorithm
        int n = nums.size();
        int major = 0; int count = 0;
        for(int i = 0; i< n; i++)
        {
            if(count==0)
            {
                count=1; major = nums[i];
            }
            else if(major == nums[i]) count++;
            else count--;
        }
        return major;
    }
};