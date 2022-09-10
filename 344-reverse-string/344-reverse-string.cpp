class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> r(s.rbegin(), s.rend());
        s = r;
    }
};