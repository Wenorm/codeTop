class Solution:
    def findContinuousSequence(self, target: int) -> List[List[int]]:
        res=[]
        left,right=1,2
        while left<=target//2:
            if (left+right)*(right-left+1)/2>target:
                left+=1
            elif (left+right)*(right-left+1)/2==target:
                res.append(list(range(left,right+1)))
                left+=1
                right+=1
            else:
                right+=1
        return res