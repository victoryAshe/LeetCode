class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        bool checks[n+1];
        fill_n(checks, n, false);
        for(int x: nums)
        {
            checks[x] = true;
        }
        
        int ans;
        for(ans =0; ans<n; ans++)
        {
            //cout << ans<< " " << nums[ans]<<endl;
            if(checks[ans]!=true) break;
        }
        return ans;
    }
};