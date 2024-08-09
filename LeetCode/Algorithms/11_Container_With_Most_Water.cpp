// https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1, maxA = 0;
        while(l < r) {
            maxA = max(maxA, (r - l) * min(height[r], height[l]));
            if(height[l] < height[r])
                l++;
            else if(height[l] > height[r])
                r--;
            else {
                l++;
                r--;
            }
        }
        return maxA;
    }
};