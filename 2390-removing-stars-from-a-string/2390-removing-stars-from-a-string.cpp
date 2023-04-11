class Solution {
public:
    string removeStars(string s) {
        int size = s.length();
        int i;
        
        string ans = "";
        char c;
        for(i = 0; i<size; i++)
        {
            c = s[i];
            if(c == 42) ans.pop_back();
            else ans += c;
        }
        
        return ans;

    }
};
