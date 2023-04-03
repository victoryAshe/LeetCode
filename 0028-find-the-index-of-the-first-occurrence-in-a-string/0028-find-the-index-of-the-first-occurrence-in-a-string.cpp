class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        
        int start = -1; int end = haystack.length();
        int idx; int len = needle.length();
        while(++start != end)
        {
            if(haystack[start]==needle[0])
            {
                for(idx = 1; idx<len; idx++)
                {
                    if(haystack[start+idx]!=needle[idx])
                        break;
                }
                if(idx==len)
                {
                    ans = start; 
                    break;
                }
            }
        }
        
        
        return ans;
    }
};