class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
                int maxi = 0;  // Variable to store the maximum count of consecutive 1s
        int currentCount = 0;  // Variable to count the current streak of consecutive 1s

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;  // Increment the current count if the element is 1
                maxi = max(maxi, currentCount);  // Update maxi if the current count is greater
            } else {
                currentCount = 0;  // Reset the current count if the element is not 1
            }
        }
        return maxi;
    }
};