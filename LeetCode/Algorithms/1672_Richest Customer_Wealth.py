class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        currMax = sum(accounts[0])
        print(max)
        for i in accounts[1:]:
            tempMax = sum(i)
            if(tempMax > currMax):
                currMax = tempMax
        
        return currMax