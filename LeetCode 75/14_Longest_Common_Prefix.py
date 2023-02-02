class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        if not strs:
            return prefix
        
        for i in range(len(min(strs))):
            check = strs[0][i]
            for str in strs:
                if(str[i] != check):
                    return prefix
            prefix += check
        return prefix
