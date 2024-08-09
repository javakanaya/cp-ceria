class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int countPlots = flowerbed.size();
        if (countPlots == 1)
        {
            if (flowerbed[0] == 0)
                return true;
            if (flowerbed[0] == 1 && n == 0)
                return true;
            return false;
        }
        int countZeros = 0, countOnes = 0;
        for (int i = 0; i < countPlots; i++)
        {
            if (flowerbed[i] == 0)
            {
                countZeros++;
            }
            else if (flowerbed[i] == 1)
            {
                countOnes++;
                if (countOnes >= 2)
                    n -= (countZeros - 1) / 2;
                else if (countOnes <= 1)
                    n -= countZeros / 2;

                countZeros = 0;
            }
        }
        if (countOnes == 0)
            n -= 1 + ((countZeros - 1) / 2);
        else
            n -= countZeros / 2;
        
        if (n <= 0)
            return true;
        return false;
    }
};