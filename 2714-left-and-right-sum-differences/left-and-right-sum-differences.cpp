class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int leftSum = 0, rightSum = 0;
        if (i == 0)
        {
            leftSum = 0;
        }
        else
        {
            for (int j = i - 1; j >= 0; j--)
            {
                leftSum += nums[j];
            }
        }

        for (int j = i + 1; j < nums.size(); j++)
        {
            rightSum += nums[j];
        }

        ans.push_back(abs(leftSum - rightSum));
    }
    return ans;
    }
};