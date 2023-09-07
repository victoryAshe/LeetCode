class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        bool carry = false;
        do
        {
            if(idx<0) 
            {
                digits.insert(digits.begin(),1);
                break;
            }
            if(digits[idx]<9) 
            {
                ++digits[idx];
                break;
            }
            else
            {
                carry=true;
                digits[idx--] = 0;
            }

        }while(carry);

        return digits;
    }
};