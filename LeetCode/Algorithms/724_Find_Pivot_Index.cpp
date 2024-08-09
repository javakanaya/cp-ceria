// https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0, leftSum = 0, len = nums.size();

        for (int num: nums)
            totalSum += num;

        for(int i = 0; i < len; leftSum += nums[i++]) {
            if(leftSum * 2 == totalSum - nums[i])
                return i;
        }
        return -1;
    }
};