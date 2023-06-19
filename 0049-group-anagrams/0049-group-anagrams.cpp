class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> elem {};
        for(string& str:strs)
        {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            elem[sorted].push_back(str);
        }
        for(auto& iter:elem) ans.push_back(move(iter.second));
        
        return ans;
    }
};