class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int len = flowerbed.size();
        if(len==1 && n==1 && flowerbed[0]==0) return true;

        int empties;
        if(flowerbed[0]==1) empties = 0;
        else empties = 2;

        for(int i = 1; i<len; i++)
        {
            if(flowerbed[i]==0)
            {
                empties++;
            }
            else
            {
                n-=empties - (1+floor(empties/2));
                empties = 0;
            }
            if(n<=0) return true;
        }
        if(empties>0) n-=floor(empties/2);
        

        return n<=0;
    }
};