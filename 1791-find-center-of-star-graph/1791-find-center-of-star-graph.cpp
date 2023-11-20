class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        
        if(edges[0][0]==edges[1][0] || edges[0][0] == edges[1][1]) return edges[0][0];
        else return edges[0][1]; 
        
        /*
        int max = edges.size();
        vector<int> cnt(max+1, 0);
        for(int i = 0; i<max; i++)
        {
            if(++cnt[edges[i][0]-1] > 1) return edges[i][0];
            if(++cnt[edges[i][1]-1] > 1) return edges[i][1];            
        }
        */
    }
};