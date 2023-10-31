class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if(m==0)
        {
            nums1 = nums2;
            return;
        }
        vector<int>::iterator p1, p2;
        p1 = nums1.end()-1;
        p2 = nums2.begin();
        
        for(int i = 0; i<n; i++)
        {
            *p1-- = *p2++;
        }
        sort(nums1.begin(), nums1.end());
        
    }
};