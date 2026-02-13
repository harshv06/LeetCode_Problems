class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """

        left,right=0,0
        set1=set()
        currLen,maxLen=0,0
        while right<len(s):
            if s[right] not in set1:
                set1.add(s[right])
                maxLen=max(maxLen,right-left+1)
            else:
                while s[right] in set1 and left<right:
                    set1.remove(s[left])
                    left+=1
                set1.add(s[right])
            right+=1
        return maxLen

        