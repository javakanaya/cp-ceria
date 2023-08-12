class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int p1 = 0, p2 = 0;
        while(p1 < nums.size()) {
            // cout << p1 << p2 << endl;
            if(nums[p1] == 0)
                k--;
            if(k < 0) {
                if(nums[p2] == 0)
                    k++;
                p2++;
            }
            p1++;
        }
        return p1 - p2;
    }
};