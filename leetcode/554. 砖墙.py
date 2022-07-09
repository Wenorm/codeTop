import collections
class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        dic=collections.defaultdict(int)
        for row in wall:
            sum=0
            for i in row:
                sum+=i
                dic[sum]+=1
            dic[sum]=0
        ans = 0
        for i in dic:
            if dic[i]>ans:
                ans=dic[i]
        return len(wall)-ans