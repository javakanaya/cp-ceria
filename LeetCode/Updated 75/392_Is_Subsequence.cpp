class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sWalk = 0, tWalk = 0, tLen = t.length(), sLen = s.length();
        while(tWalk < tLen)
        {
            if(s[sWalk] == t[tWalk])
                sWalk++;
            tWalk++;
        }
        if(sWalk == sLen)
            return true;
        return false;
    }
};