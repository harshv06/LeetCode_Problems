class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        s1=set()
        maxLength=0
        left=0
        for right in range(0,len(s)):
            if s[right] not in s1:
                s1.add(s[right])
                maxLength=max(maxLength,right-left+1)
            else:
                while s[right] in s1:
                    s1.remove(s[left])
                    left = left+1
                s1.add(s[right])
        return (maxLength)