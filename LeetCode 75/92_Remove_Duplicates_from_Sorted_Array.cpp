#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int noDuplicateIdx = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[noDuplicateIdx] != nums[i]){
                nums[noDuplicateIdx + 1] = nums[i];
                noDuplicateIdx++;
            }
        }
        return ++noDuplicateIdx;
    }
};