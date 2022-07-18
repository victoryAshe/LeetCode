#include <vector>
#include <algorithm>

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()%2==0)
            sort(nums.begin(), nums.begin()+nums.size()/2 , greater<int>());
        else
            sort(nums.begin(), nums.begin()+nums.size()/2+1 , greater<int>());

        
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