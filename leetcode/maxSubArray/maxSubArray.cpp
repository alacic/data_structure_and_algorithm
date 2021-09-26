#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int max_pre = 0;
        for(auto num:nums)
        {
            max_sum = max(max_sum, max_pre + num);
            max_pre = max(0, max_pre + num);
        }
        return max_sum;
    }
};