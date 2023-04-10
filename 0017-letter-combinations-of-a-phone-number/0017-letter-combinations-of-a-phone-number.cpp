class Solution {
public:
    map<char,vector<char>> hash = {
        {'2', vector<char>{'a', 'b', 'c'}},
        {'3', vector<char>{'d', 'e', 'f'}},
        {'4', vector<char>{'g', 'h', 'i'}},
        {'5', vector<char>{'j', 'k', 'l'}},
        {'6', vector<char>{'m', 'n', 'o'}},
        {'7', vector<char>{'p', 'q', 'r', 's'}},
        {'8', vector<char>{'t', 'u', 'v'}},
        {'9', vector<char>{'w', 'x', 'y', 'z'}}
    };
    
    int size;
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        
        size = digits.length();
        if(size==0) return ans;

        BackTracking(digits, 0, "");
        return ans;
    }

    void BackTracking(string in, int idx, string out)
    {
        if(idx >= size)
        {
            ans.push_back(out); 
            return;
        }

        vector<char> temp = hash[in[idx]];
        char c;
        for(int i = 0; i<temp.size(); i++)
        {
            char c = temp[i];
            out.push_back(c);
            BackTracking(in, idx+1, out);
            out.pop_back();
        }
    }
};