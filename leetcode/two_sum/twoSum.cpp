#include <map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> already_looked;
        already_looked[nums[0]] = 0;
        for (int i = 1; i < nums.size(); i++)
        {

            if (already_looked.find(target - nums[i]) == already_looked.end())
            {
                already_looked[nums[i]] = i;
            }
            else
            {
                return {already_looked[target - nums[i]], i};
            }
        }
        return {};
    }
};