class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> answer (size);
        answer[0] = 1;
        for(int i = 1; i < size; i++){
            answer[i] = answer[i-1] * nums[i - 1];
        }
        // for(int i = 0; i < size; i++)
        //     printf("answer[%d] = %d\n",i, answer[i]);

        // printf("---------------------\n");

        int fromRight = 1;
        for(int i = size - 1; i >= 0; i--) {
            answer[i] *= fromRight;
            fromRight *= nums[i];
        }

        // for(int i = 0; i < size; i++)
        //     printf("answer[%d] = %d\n",i, answer[i]);
        
        return answer;
    }
};