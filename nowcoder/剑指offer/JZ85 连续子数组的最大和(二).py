class Solution:
    def FindGreatestSumOfSubArray(self , array: List[int]) -> List[int]:
        endindex=0
        startindex=0
        maxsum=-100000
        _sum=0
        left=0
        for i in range(len(array)):
            _sum+=array[i]
            if _sum>=maxsum:
                maxsum=_sum
                endindex=i
                startindex=left
            if _sum<0:
                _sum=0
                left=i+1
        return array[startindex:endindex+1]