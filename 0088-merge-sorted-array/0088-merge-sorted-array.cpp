class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = nums1.size()-1;
        int p2 = 0;
        
        for(int i = 0; i<n; i++)
        {
            nums1[p1--] = nums2[p2++];
        }
        sort(nums1.begin(), nums1.end());
        
    }
};