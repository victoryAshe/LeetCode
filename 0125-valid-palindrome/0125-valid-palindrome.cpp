class Solution {
public:
    
    bool isPalindrome(string s) {

        int end = s.length() -1;
        for(int start = 0; start < end; start++)
        {
            while(start<end)
            {
                if(!isalnum(s[start])) start++;
                else break;
            }
            while(start<end)
            {
                if(!isalnum(s[end])) end--;
                else break;
            }
            
            if(s[start]<97) s[start]+=32;
            if(s[end]<97) s[end] += 32;
            if(s[start]!=s[end]) return false;
            
            --end;
        }
        return true;
    }
};