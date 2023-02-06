#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                parantheses.push(s[i]);
            }
            else if(s[i] == ')') {
                if(parantheses.empty() || parantheses.top() != '(')
                    return false;
                parantheses.pop();
            }
            else if(s[i] == ']') {
                if(parantheses.empty() || parantheses.top() != '[')
                    return false;
                parantheses.pop();
            }
            else if(s[i] == '}') {
                if(parantheses.empty() || parantheses.top() != '{')
                    return false;
                parantheses.pop();
            }
        }
        return parantheses.empty();
    }
};