class Solution(object):
    def maxScore(self, cardPoints, k):
        """
        :type cardPoints: List[int]
        :type k: int
        :rtype: int
        """
        
        n=len(cardPoints)
        currSum=sum(cardPoints[:k])
        maxSum=currSum
        for i in range(0,k):
            currSum-=cardPoints[k-1-i]
            currSum+=cardPoints[n-i-1]

            maxSum=max(maxSum,currSum)
        return maxSum

        