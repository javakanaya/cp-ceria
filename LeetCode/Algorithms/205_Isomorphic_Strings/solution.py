class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        # initialize two dictionaries to store the mapping of s to t and t to s
        mapST, mapTS = {}, {}

        # iterate through the strings
        for i in range(len(s)):
            # get the characters at the current index for both strings
            c1, c2 = s[i], t[i]

            # check if the characters are already in the dictionaries 
            # and if the mapping is not the same with the other char
            if ((c1 in mapST and mapST[c1] != c2) or
                (c2 in mapTS and mapTS[c2] != c1)):
                # if the mapping is not the same, return False
                return False

            # add the mapping to the dictionaries
            mapST[c1] = c2
            mapTS[c2] = c1

        # if the loop completes, return True
        return True
        