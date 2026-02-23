class Solution(object):
    def hasAllCodes(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: bool
        """
        data={}
        for start in range(len(s)):
            for end in range(start,start+k):
                if len(s[start:end+1])<k:
                    continue
                if s[start:end+1] not in data:
                    data[s[start:end+1]]=0
                # print(len(s[start:end+1]),s[start:end+1])
                data[s[start:end+1]]+=1
        my_list=list(data.keys())
        if len(my_list)>=2**k:
            return True
        return False

        