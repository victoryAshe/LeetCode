#include <vector>
#include <algorithm>

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int>::iterator p;
        p = nums.size()%2==0 ? nums.begin()+nums.size()/2 : nums.begin()+nums.size()/2+1;
        sort(nums.begin(), p , greater<int>());

        
        int i = 1;
        int min = nums.size();
        while(i<=min)
        {
            nums.insert(nums.begin()+i, nums[nums.size()-1]);
            nums.pop_back();
            i+=2;
        }
        

        
    }
};