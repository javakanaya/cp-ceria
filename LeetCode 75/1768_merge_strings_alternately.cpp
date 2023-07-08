class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, walk = 0;
        char result[201];

        while(i < word1.length() || i < word2.length())
        {
            if(i < word1.length()) {
                result[walk] = word1[i];
                walk++;
            }
            if(i < word2.length()){
                result[walk] = word2[i];
                walk++;
            }
            i++;
        }
        result[walk] = '\0';
        return result;
    }
};