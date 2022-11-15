class Solution {
public:
    vector<vector<int>> d{50, vector<int>{1}};
    
    vector<int> generateRow(int rowIndex)
    {        
        for(int i = 1; i<rowIndex-1; i++)
        {
            d[rowIndex-1].push_back(d[rowIndex-2][i-1]+d[rowIndex-2][i]);
        }
        d[rowIndex-1].push_back(1);
        
        return d[rowIndex-1];
    }
    
    vector<vector<int>> generate(int numRows) {
                
        for(int i = 2; i<=numRows; i++)
            generateRow(i);
        
        return vector<vector<int>>(d.begin(), d.begin()+numRows);
    }
};