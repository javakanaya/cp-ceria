class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int maxAlt = 0, currAlt = 0;
        for (int netGain : gain)
        {
            currAlt += netGain;
            maxAlt = max(currAlt, maxAlt);
        }
        return maxAlt;
    }
};