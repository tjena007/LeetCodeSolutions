class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {

        int n = nums.size() * 2;

        vector<int> ans(n, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }

        return ans;
    }
};