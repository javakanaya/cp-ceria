// https://leetcode.com/problems/length-of-last-word/

// count the length from the last string index

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(isalpha(s[i])) {
                count++;
            } else {
                if (count)
                    return count;
            }
        }
        return count;
    }
};