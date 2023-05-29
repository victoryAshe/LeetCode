class Solution {
public:
    int minimumSum(int num) {
        int ans = 0;
        string s = to_string(num);
        sort(s.begin(), s.end());
        for(int i = 0; i<2; i++)
        {
            if(s[i]!='0')
            {
                ans+= (s[i]-48)*10+s[3-i]-48;
            }
            else
            {
                ans+=s[3-i]-48;
            }
        }

        return ans;
    }
};