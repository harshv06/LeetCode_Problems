class Solution(object):

    def numSubarraysWithSum(self, nums, goal):
        return self.atMost(nums, goal) - self.atMost(nums, goal - 1)
    
    def atMost(self, nums, goal):

        if goal < 0:
            return 0

        left = 0
        maxCount = 0
        maxSum = 0

        for right in range(len(nums)):

            maxSum += nums[right]

            # shrink window until valid
            while maxSum > goal:
                maxSum -= nums[left]
                left += 1

            # count valid subarrays ending at right
            maxCount += (right - left + 1)

        return maxCount
