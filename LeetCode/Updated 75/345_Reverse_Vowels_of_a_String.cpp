class Solution {
private:
    bool isVowels(char c) {
        if(c == 'a' || c == 'A' ||c == 'i' ||c == 'I' ||c == 'u' ||c == 'U' ||c == 'e' ||c == 'E' ||c == 'o' ||c == 'O')
            return true;
        return false;
    }

public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end)
        {
            while(start < end && !isVowels(s[start]))
                start++;
            while(start < end && !isVowels(s[end]))
                end--;

            // printf("-----\n");
            // printf("%d %d\n", start, end);
            // printf("%c %c\n", s[start], s[end]);

            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
        return s;
    }
};