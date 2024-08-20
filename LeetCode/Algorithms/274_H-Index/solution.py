from typing import List


class Solution:
    def hIndex(self, citations: List[int]) -> int:
        
        # initialize the counts array
        n = len(citations)
        counts = [0] * (n + 1)

        # count the occurence of each citation for each papers
        # store it to the counts array
        for cite in citations:
            # if the citation is less than or equal n, then store it to the n-th index
            if cite <= n:
                counts[cite] += 1
            # if the citation is greater than n, then store it to the n-th index
            else:
                counts[n] += 1
        
        # count the number of citations
        citations_counts = 0
        
        # iterate from n to 0
        for i in range(n, -1, -1):
            # from the highest citation, count the number of citations
            citations_counts += counts[i]
            # if the number of citations is greater than or equal to i, then return i as h-index
            if citations_counts >= i:
                return i
            
        # if there is no h-index, then return 0
        return 0