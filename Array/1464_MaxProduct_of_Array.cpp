class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int ans = 0;

        if (nums.size() == 2)
        {
            return ((nums[0] - 1) * (nums[1] - 1));
        }

        int highest = 0;
        int secondHighest = 0;
        int index = -1;
        //find highest num
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > highest)
            {
                index = i;
                highest = nums[i];
            }
        }

        //find second highest num
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == index)
            {
                i++;
            }
            if (nums[i] > secondHighest && nums[i] <= highest)
            {
                secondHighest = nums[i];
            }
        }

        //return product
        return ((highest - 1) * (secondHighest - 1));
    }
};