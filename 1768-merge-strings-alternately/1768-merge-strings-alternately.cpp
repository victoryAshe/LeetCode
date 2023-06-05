class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer = "";
        int i; 
        int len1 = word1.length();
        int len2 = word2.length();

        for(i = 0; i<len1; i++)
        {
            answer+= word1[i];
            if(i<len2) answer+= word2[i];
        }
        if(len1<len2) answer+= word2.substr(i,len2-len1);
        return answer;
    }
};