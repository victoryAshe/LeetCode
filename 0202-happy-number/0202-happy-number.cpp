class Solution {
public:
    bool isHappy(int n) {
        
        vector<vector<int>> sets;
        
        while(true)
        {
            // 각 자리의 숫자를 추출
            vector<int> temp;
            while(n/10>0)
            {
                temp.push_back(n%10);
                n/=10;
            }
            if(n>0) temp.push_back(n);
            
            // 현재 map에 해당 숫자들이 key로 존재하는지 검색
            if(find(sets.begin(), sets.end(), temp)!=sets.end())
            {
                return false;
            }
            
            
            // 없다면, 각 자릿수의 제곱의 합을 계산
            int val = 0;
            for(int x: temp) val+= x*x;
            
            // happy인지 검사
            if(val==1) return true;
            
            // happy가 아니면, 추가
            sets.push_back(temp);
            
            // 다음 실행 준비
            n = val;
        }
    }
};