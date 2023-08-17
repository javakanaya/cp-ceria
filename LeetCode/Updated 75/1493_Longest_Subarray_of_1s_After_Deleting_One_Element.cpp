class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int nLen = nums.size();

        int l = 0, countZeros = 0, subLen = 0;

        for (int r = 0; r < nLen; r++)
        {
            // printf("l: %d, r: %d\ncountZeros: %d\n---------\n", l, r, countZeros);
            if (nums[r] == 0)
                countZeros++;
            while (countZeros > 1)
            {
                if (nums[l] == 0)
                    countZeros--;
                l++;
            }
            subLen = max(subLen, r - l + 1 - countZeros);
        }
        return (subLen == nLen) ? subLen - 1 : subLen;
    }
};