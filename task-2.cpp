class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum1 = 0, sum2 = 0, temp;
        temp = nums.size();
        sum1 = (temp * (temp + 1)) / 2;
        for (int i = 0; i < temp; i++)
            sum2 += nums[i];
        return sum1 - sum2;
    }
};