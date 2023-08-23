// https://leetcode.com/problems/find-the-difference-of-two-arrays/description/?envType=study-plan-v2&envId=leetcode-75


class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> setNums1;
        set<int> setNums2;

        for (int num : nums1)
            setNums1.insert(num);

        for (int num : nums2)
            setNums2.insert(num);

        vector<vector<int>> result;

        vector<int> resultNums1;

        for (int num : setNums1)
        {
            if (setNums2.count(num) == 0)
                resultNums1.push_back(num);
        }

        vector<int> resultNums2;

        for (int num : setNums2)
        {
            if (setNums1.count(num) == 0)
                resultNums2.push_back(num);
        }

        result.push_back(resultNums1);
        result.push_back(resultNums2);

        return result;
    }
};