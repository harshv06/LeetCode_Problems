class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        maxLen=0
        maxfreq=0
        left,right=0,0
        hashmap={}
        while right<len(s):
            if s[right] not in hashmap:
                hashmap[s[right]]=0
            hashmap[s[right]]+=1
            maxfreq=max(maxfreq,hashmap[s[right]])

            if (right-left+1) - maxfreq > k:
                hashmap[s[left]]-=1
                left+=1
            
            if(right-left+1) - maxfreq<=k:
                maxLen=max(maxLen,(right-left+1))
            right+=1
        return maxLen
        
        