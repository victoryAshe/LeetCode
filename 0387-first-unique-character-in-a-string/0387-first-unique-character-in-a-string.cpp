class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int> alpha(26,0);
        for(char c:s) alpha[c-'a']++;
        
        int size = s.length();
        for(int i = 0; i<size; i++)
        {
            if(alpha[s[i] - 'a'] == 1) return i;
        }
        
        return -1;
    }
};