class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        diff=0
        maxdiff=0
        if not nums:
            return 0;
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                continue
            if abs(nums[i]-nums[i-1])==1:
                diff+=1
                maxdiff=max(maxdiff,diff)
            else:
                maxdiff=max(maxdiff,diff)
                diff=0
        return maxdiff+1

