class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};
        if(nums.size()==0) return ans;
        
        int idx, size;
        idx = size = nums.size();
        vector<int> visit(size, 0);
        
        vector<int> temp; int i;
        while(--idx >= 0)
        {
            visit[idx] = 1;
            do{
                temp.clear();
                for(i = 0; i<visit.size(); ++i)
                    if(visit[i]!=0) temp.push_back(nums[i]);
                ans.push_back(temp);
            }while(next_permutation(visit.begin(), visit.end()));
        }
        
        return ans;
    }
};