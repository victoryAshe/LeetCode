#include <cstdlib>
class Solution {
public:
    
    static bool compare(const string &a, const string &b)
    {
        if(a.length()!= b.length())
            return stol(a+b) > stol(b+a);
        
        return stol(a)>stol(b);       
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
        if(count(answer.begin(), answer.end(), '0')==answer.length())
            return "0";
        
        return answer;
    }
};