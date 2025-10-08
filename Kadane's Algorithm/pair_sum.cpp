// Maximum subarray sum

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currSum = 0, maxSum = INT_MIN;

        for (int val : nums)
        {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};


// Minimum subarray sum

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minSubArray(vector<int> &nums)
    {
        int currSum = 0, minSum = INT_MAX;

        for (int val : nums)
        {
            currSum += val;
            minSum = min(currSum, minSum);
            if (currSum > 0)  // reset when sum is positive
            {
                currSum = 0;
            }
        }
        return minSum;
    }
};