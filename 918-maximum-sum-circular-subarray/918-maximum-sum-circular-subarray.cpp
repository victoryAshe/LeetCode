#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

class Solution {
public:

int great = -3 * pow(10,4);
int minS = 3 * pow(10,4);
    

int maxSubarraySumCircular(vector<int>& nums) {

    if(nums.size()==1) return nums[0];
    vector<int> minNum = nums;

	int sum = nums[0];
	for (int i = 1; i < nums.size(); i++)
	{
		sum += nums[i];
        
        minNum[i] = min(minNum[i],minNum[i]+minNum[i-1]);
        minS = min(minS, minNum[i]);
        //cout << minS<<endl;
        nums[i] = max(nums[i], nums[i] + nums[i-1]);
        great = max(great, nums[i]);
        //cout << great << ", " <<minS <<", "<< nums[i]<<endl;
	}

    //cout << great << ", " << minS <<", "<<sum <<endl;
	if (minS == sum) return great;
	else sum -= minS;

	return max(sum, great);

}

};