class Solution {
public:
    vector<vector<bool>> visited;
    bool result = false;
    bool exist(vector<vector<char>>& board, string word) {
        visited = vector<vector<bool>>(board.size(), vector<bool>(board[0].size()));
        int i, j;

        for(i = 0; i<board.size(); i++)
        {
            for(j = 0; j<board[0].size(); j++)
            {
                if(board[i][j]==word[0])
                {
                    visited[i][j] = true;

                    Search(board, i,j,word.substr(1));
                    if(result) return result;
                    
                    visited[i][j] = false;
                }
            }
        }
                
        return result;
    }
    
    void Search(vector<vector<char>>& board, int i, int j, string word)
    {
        if(word.length()==0)
        {
            result = true;
            return;
        }
        
        char target = word[0];
        //left, up, right, down
        if(j>0 && board[i][j-1]==target && !visited[i][j-1])                        
        {
            visited[i][j-1] = true;
            Search(board, i, j-1, word.substr(1));
            visited[i][j-1] = false;
        }
        if(i>0 && board[i-1][j]==target && !visited[i-1][j])                   
        {
            visited[i-1][j] = true;
            Search(board, i-1, j, word.substr(1));
            visited[i-1][j] = false;
        }
        if(j<board[i].size()-1 && board[i][j+1]==target && !visited[i][j+1])  
        {
            visited[i][j+1] = true;
            Search(board, i, j+1, word.substr(1));
            visited[i][j+1] = false;
        }
        if(i<board.size()-1 && board[i+1][j] ==target && !visited[i+1][j])     
        {
            visited[i+1][j] = true;
            Search(board, i+1, j, word.substr(1));
            visited[i+1][j] = false;
        }
    }
};