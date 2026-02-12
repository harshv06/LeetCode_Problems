class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        smallestResult=nums[0]+nums[1]+nums[2]
        for i in range(len(nums)):
            num1=nums[i]
            left=i+1
            right=len(nums)-1
            while(left<right):
                totalSum=num1+nums[left]+nums[right]
                if abs(target-totalSum) < abs(target-smallestResult):
                    smallestResult=totalSum

                if totalSum==target:
                    return target
                if totalSum<target:
                    left+=1
                else:
                    right-=1

        return smallestResult

        return 0
        