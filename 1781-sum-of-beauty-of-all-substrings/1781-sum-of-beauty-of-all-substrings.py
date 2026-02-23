class Solution(object):
    def beautySum(self, s):
        """
        :type s: str
        :rtype: int
        """
        sum=0
        for start in range(len(s)):
            for end in range(start,len(s)):
                data={}
                if len(s[start:end+1])==1:
                    sum+=0
                    continue
                for i in range(start,end+1):
                    if s[i] not in data:
                        data[s[i]]=0
                    data[s[i]]+=1
                my_list=list(data.values())
                my_list.sort(reverse=True)
                if len(s[start:end])!=1:
                    sum+=(abs(my_list[0]-my_list[-1]))
            
        return sum

