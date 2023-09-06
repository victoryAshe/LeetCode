class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        int max = strs.size();
        if(max==0) return answer;
        else answer = strs[0];

        for(int i = 1; i<max; i++)
        {
            int maxJ = strs[i].length();
            for(int j = 0; j <maxJ; j++)
            {
                if(strs[i][j]!=answer[j]) 
                {
                    answer = answer.substr(0,j);
                    break;
                }
            }
            
            if(maxJ<answer.length())
            {
                answer = answer.substr(0,maxJ);
            }

        }
        return answer;
    }
};