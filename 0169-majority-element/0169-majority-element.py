class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
    
        cnt,el1=0,0
        for i in range(0,len(nums)):
            if(cnt==0):
                cnt=1
                el1=nums[i]
            elif nums[i]==el1:
                cnt+=1
            else:
                cnt-=1

        counter=0
        
        for i in nums:
            if el1==i:
                counter+=1
        
        if counter>(len(nums)/2):
            return el1
        else:
            return 0
        