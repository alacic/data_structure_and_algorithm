#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int middle = (low + high) / 2;
            if (target == nums[middle])
            {
                return middle;
            }
            else if (target < nums[middle])
            {
                high = middle - 1;
            }
            else
            {
                low = middle + 1;
            }
        }
        return -1;
    }
};