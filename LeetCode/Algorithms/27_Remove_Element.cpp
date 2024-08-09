#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int swapedTo = 0;
        for(int num: nums){
            if(num != val){
                nums[swapedTo] = num;
                swapedTo++;
            }
        }
        return swapedTo;
    }
};