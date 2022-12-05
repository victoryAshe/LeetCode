#include <cstdlib>
class Solution {
public:
    
    static bool compare(const string &a, const string &b)
    {
        return a+b > b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        string answer = "";        
        
        vector<string> snums;
        for(int i = 0; i<nums.size(); i++)
            snums.push_back(to_string(nums[i]));
        
        sort(snums.begin(), snums.end(), compare);
        
        for(int i = 0; i<snums.size(); i++)
            answer+=snums[i];
        
        //exception handling: "00" 
        if(answer[0]=='0')
            return "0";
        
        return answer;
    }
};