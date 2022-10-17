class Solution {
public:
    
    bool isPal(string &s, int i, int j)
    {
        while(i<j)
            if(s[i++]!=s[j--])
                return false;
        
        return true;
    }
    
    void backtrack(string &s, vector<vector<string>> &answer, vector<string> &part, int i){
        if(i>=s.size())
        {
            answer.push_back(part);
            return;
        }
        
        for(int j = i; j<s.size(); j++)
        {
            //cout << s.substr(i,j-1+1)<< endl;
            if(isPal(s, i, j))
            {
                part.push_back(s.substr(i, j-i+1));
                
                backtrack(s, answer, part, j+1);
                part.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        
        vector<string> part;
        backtrack(s, answer, part, 0);
        return answer;
    }
};