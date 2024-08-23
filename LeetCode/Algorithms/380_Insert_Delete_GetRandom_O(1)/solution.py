import random

class RandomizedSet:
    def __init__(self):
        # Initialize Hashmap and list
        self.numMap = {} # key: value, value: index
        self.numList = [] # for random access

    def insert(self, val: int) -> bool:
        isExists = val in self.numMap
        
        # if the value is not exitst in the hashMap
        if not isExists:
            # insert to both data structures
            # set the hashmap to the list index
            self.numMap[val] = len(self.numList)
            self.numList.append(val)
        return not isExists

    def remove(self, val: int) -> bool:
        isExists = val in self.numMap
        
        # if the value is exist in the hashMap
        if isExists:
            # get the index of the value in the list
            idx = self.numMap[val]            
            
            # swap the value with the last value in the list
            lastValue = self.numList[-1]
            self.numList[idx] = lastValue
            
            # remove the last value from the list
            self.numList.pop()
            
            # update the index of the last value in the hashmap
            self.numMap[lastValue] = idx
            
            # remove the value from the hashmap
            del self.numMap[val]
        return isExists

    def getRandom(self) -> int:
        # return a random value from the list
        return random.choice(self.numList)
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()