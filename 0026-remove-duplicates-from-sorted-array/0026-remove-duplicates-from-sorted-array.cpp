class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator first = nums.begin(), 
       result = nums.begin(), last = nums.end();
        int ans = 1;

        while(++first != last)
        {
            if(!(*result == *first))
            {
                *(++result) = *first;
                ans++;
            }
        }

        return ans;
    }
};