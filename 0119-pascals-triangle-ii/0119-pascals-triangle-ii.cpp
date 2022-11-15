class Solution {
public:
    
    vector<vector<int>> d{50, vector<int>{1}};
    
    vector<int> generateRow(int rowIndex)
    {        
        for(int i = 1; i<rowIndex-1; i++)
        {
            d[rowIndex].push_back(d[rowIndex-1][i-1]+d[rowIndex-1][i]);
        }
        d[rowIndex].push_back(1);
        
        return d[rowIndex];
    }
    
    vector<int> getRow(int rowIndex) {
        
        if(rowIndex==0) return d[0];
        
        d[1] = {1,1};
        if(rowIndex==1) return d[1];
        
        for(int i = 2; i<=rowIndex+1; i++)
            generateRow(i);
        
        return d[rowIndex+1];
    }
};