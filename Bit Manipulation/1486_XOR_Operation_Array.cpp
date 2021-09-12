class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ans = 0;

        if (n == 1)
        {
            return start;
        }

        for (int i = 0; i < n; i++)
        {
            int n = start + (i << 1);
            cout << n << endl;
            ans = ans ^ n;
        }

        return ans;
    }
};