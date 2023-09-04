class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int count =0;
        vector<pair<int, int>> v;
        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = 0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == 1) v.push_back({i,j});
            }
        }

        count = 4 *(v.size());

        for(int i = 0; i<v.size(); i++)
        {
            int x = v[i].first, y = v[i].second;
            //check upwards
            if(x!=0 && grid[x-1][y] ==1) count--;
            //check downwards
            if(x!=grid.size()-1 && grid[x+1][y]==1) count --;
            //check left
            if(y!=0 && grid[x][y-1]==1) count--;
            //check right
            if(y!=grid[0].size()-1 && grid[x][y+1] ==1) count--;
        }
        return count;
    }

    /*
    class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        int rows = grid.size();
        int cols = grid[0].size();

        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                if(grid[i][j]==1) {
                    peri += 4;
                    if(i>0 && grid[i-1][j])
                        peri -= 2;
                    if(j>0 && grid[i][j-1])
                        peri -= 2;
                }
            }
        }
        return peri;
    }
};
    */


};