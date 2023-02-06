#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
        for(char c: s) {
            if(c == '(' || c == '[' || c == '{') {
                parantheses.push(c);
            }
            else if(c == ')') {
                if(parantheses.empty() || parantheses.top() != '(')
                    return false;
                parantheses.pop();
            }
            else if(c == ']') {
                if(parantheses.empty() || parantheses.top() != '[')
                    return false;
                parantheses.pop();
            }
            else if(c == '}') {
                if(parantheses.empty() || parantheses.top() != '{')
                    return false;
                parantheses.pop();
            }
        }
        return parantheses.empty();
    }
};