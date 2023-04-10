class Solution {
public:
    bool isValid(string s) {
        string open = "";
        int size = s.length();
        char curr, last;
        for(int i = 0; i<size; i++)
        {
            curr = s[i];
            if(curr == '(' || curr == '{' || curr == '[') open += curr;
            else 
            {
                last = open.back();
                if((curr == ')' && last != '(')
                || (curr == '}' && last != '{')
                || (curr == ']' && last != '[')) return false;
                else open.pop_back();
            }
        }

        return open.length() == 0;
    }
};