class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {

        // for pairs select highest second hight and lowest
        sort(piles.begin(), piles.end());

        int ans = 0;

        int i = piles.size() - 2;
        int j = 0;

        while (i >= j)
        {
            ans += piles[i];
            i = i - 2;
            j++;
        }

        return ans;
    }
};