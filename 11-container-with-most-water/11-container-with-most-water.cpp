class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int j = height.size()-1;
        int size = 0;

        while(i<j)
        {
            size = max(size, (j-i)*min(height[i], height[j]));
            if(height[i]<height[j])
                i++;
            else 
                j--;
            
        }
        
        return size;
    }
};