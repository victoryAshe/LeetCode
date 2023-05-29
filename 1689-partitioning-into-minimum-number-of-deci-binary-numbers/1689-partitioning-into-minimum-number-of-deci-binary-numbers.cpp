class Solution {
public:
    int minPartitions(string n) {
        int size = n.length();
        int ans = 0;
        for(int i = 0 ; i<size; i++)
        {
            if(n[i]>ans) ans = n[i];
        }
        return ans - 48;
    }
};