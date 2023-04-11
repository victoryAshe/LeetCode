class Solution {
public:
    string removeStars(string s) {
        int size = s.length();
        int i;
        
        string ans = "";
        for(i = 0; i<size; i++)
        {
            if(s[i] == 42) ans.pop_back();
            else ans += s[i];
        }
        
        return ans;

    }
};
